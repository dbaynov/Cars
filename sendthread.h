#ifndef SENDTHREAD_H
#define SENDTHREAD_H

#include <QObject>
#include <QThread>
#include <smtp.h>
#include <smtpdriver.h>
#include <QtCore>


class SendThread : public QThread
{
    Q_OBJECT
public:
    explicit SendThread(QObject *parent = 0);
    void run();
signals:
    void threadError(QString error,int t =0);
private:
    QString sender;
    QString to;
    QString Subject;
    QString data;
    QString user;
    QString password;
    Smtp * mSmtp;
    smtpDriver *driver;
public slots:
    void Set(const QString &mSender, const QString &mTo, const QString &mSubject, const QString &mData, QString USR, QString PSW);
    void SetError(QString mError, int mT);
};

#endif // SENDTHREAD_H
