#include "sendthread.h"

SendThread::SendThread(QObject *parent) : QThread(parent)
{
     //mSmtp = new Smtp("infocarabrites72@gmail.com", "12345678900987654321!@#", "smtp.gmail.com",465);


}

void SendThread::Set(const QString &mSender, const QString &mTo, const QString &mSubject, const QString &mData,QString USR,QString PSW)
{

    this->sender = mSender;
    this->to = mTo;
    this->Subject = mSubject;
    this->data = mData;
    this->user = USR;
    this->password = PSW;
}

void SendThread::run()
{
    driver = new smtpDriver();
    QMutex mutex;
    mutex.lock();
    driver->setUrField(user,password);

    //connect(driver,SIGNAL(SmtpError(QString,int)),this,SLOT(SetError(QString,int)),Qt::DirectConnection);
    //driver->SendMail(sender,to,Subject,data);

   driver->sendSslMail(sender,to,Subject,data);
   mutex.unlock();
   // mSmtp->sendMail(sender,to,Subject,data);
}

void SendThread::SetError(QString mError,int mT)
{
    emit threadError(mError,mT);
}
