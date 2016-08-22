#ifndef SMTPDRIVER_H
#define SMTPDRIVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTextStream>
#include <QtWidgets/QMessageBox>
#include <QtNetwork/QSslSocket>
#include <QtCore>

class smtpDriver : public QObject
{
    Q_OBJECT
public:
    explicit smtpDriver( QObject *parent = 0);

    void sendSslMail(const QString &from, const QString &to, const QString &subject, const QString &body);
signals:
    void SmtpError(QString error,int t = 0);
    void status( const QString &);
public slots:

    bool SendMail(QString from, QString to,QString subject, QString msg);
    void connectTo(QString server = "localhost", int port = 25);
    void readyRead();
    void stateChanged(QAbstractSocket::SocketState socketState);
    void errorReceived(QAbstractSocket::SocketError socketError);
    void disconnected();
    void connected();
    void setUrField(QString USR, QString PSW);
private:
    QTcpSocket * socket;
    QSslSocket * sslSocket;
    QString message;
    QTextStream *t;
    QString from;
    QString rcpt;
    QString response;
    QString user;
    QString pass;
    QString host;
    int port;
    int timeout;
    enum states{Tls, HandShake ,Auth,User,Pass,Rcpt,Mail,Data,Init,Body,Quit,Close};
    int state;
protected:

};

#endif // SMTPDRIVER_H
