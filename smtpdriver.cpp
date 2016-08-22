#include "smtpdriver.h"

smtpDriver::smtpDriver(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);
    sslSocket = new QSslSocket(this);
    connect(sslSocket, SIGNAL(readyRead()), this, SLOT(readyRead()),Qt::DirectConnection);
    connect(sslSocket, SIGNAL(connected()), this, SLOT(connected()));
   //connect(sslSocket, SIGNAL(error(QAbstractSocket::SocketError)), this,SLOT(errorReceived(QAbstractSocket::SocketError)));
   // connect(sslSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(stateChanged(QAbstractSocket::SocketState)));
  //  connect(sslSocket, SIGNAL(disconnected()), this,SLOT(disconnected()));
    //this->user = "infocarabrites72@gmail.com";
    //this->pass = "12345678900987654321!@#";
    this->host = "smtp.gmail.com";
    this->port = 465;
    this->timeout = 3000;


}

void smtpDriver::connectTo(QString server,int port)
{
    socket->connectToHost(server,port);

    if(!socket->isOpen())
    {
        emit SmtpError(socket->errorString());
        return;
    }

}

void smtpDriver::setUrField(QString USR,QString PSW)
{
    this->user = USR;
    this->pass = PSW;
}

bool smtpDriver::SendMail(QString from,QString to ,QString subject, QString  msg )
{
    QByteArray tmp ;
    connectTo();
    socket->waitForReadyRead(5000);
    qDebug() << socket->readAll();
    socket->write("EHLO gosho.net \n\r");
    socket->waitForBytesWritten(3000);

    socket->waitForReadyRead(5000);
    qDebug() <<socket->readAll();
    tmp.append("MAIL FROM: <");
    tmp.append(from);
    tmp.append(">");
    tmp.append("\n\r");
    qDebug() << "Sending ... \n" << tmp ;
    socket->write(tmp);
    socket->waitForBytesWritten(3000);
    socket->waitForReadyRead(5000);
    qDebug() << socket->readAll();

    tmp.clear();
    tmp.append("RCPT to: <");
    tmp.append(to);
    tmp.append(">");
    tmp.append("\n\r");
    qDebug() << "Sending ... \n" << tmp ;
    socket->write(tmp);
    socket->waitForBytesWritten(3000);
    socket->waitForReadyRead(5000);
    qDebug() << socket->readAll();


    tmp.clear();
    tmp.append("DATA ");
    tmp.append("Subject:");
    tmp.append(subject);
    tmp.append("\n\r");
    tmp.append("\n\r");
    tmp.append(msg);
    qDebug() << "Sending ... \n" << tmp ;
    socket->write(tmp);
    socket->waitForBytesWritten(3000);
    socket->waitForReadyRead(5000);
    qDebug() << socket->readAll();





    return true;
}



void smtpDriver::sendSslMail(const QString &from, const QString &to, const QString &subject, const QString &body)
{
    message = "To: " + to + "\n";
    message.append("From: " + from + "\n");
    message.append("Subject: " + subject + "\n");
    message.append(body);
    message.replace( QString::fromLatin1( "\n" ), QString::fromLatin1( "\r\n" ) );
    message.replace( QString::fromLatin1( "\r\n.\r\n" ),
                     QString::fromLatin1( "\r\n..\r\n" ) );
    this->from = from;
    rcpt = to;
    state = Init;
    sslSocket->connectToHostEncrypted(host, port); //"smtp.gmail.com" and 465 for gmail TLS
    if (!sslSocket->waitForConnected(timeout)) {
        qDebug() << sslSocket->errorString();
    }
    if(!sslSocket->isOpen())
    {
        qDebug() << sslSocket->errorString();
    }
    //
    t = new QTextStream( sslSocket );
   //sslSocket->waitForBytesWritten(timeout);
    sslSocket->waitForReadyRead(1000);
   // qDebug() << sslSocket->readAll();


}

void smtpDriver::stateChanged(QAbstractSocket::SocketState socketState)
{

    qDebug() <<"stateChanged " << socketState;
}

void smtpDriver::errorReceived(QAbstractSocket::SocketError socketError)
{
    qDebug() << "error " <<socketError;
}

void smtpDriver::disconnected()
{

    qDebug() <<"disconneted";
    qDebug() << "error "  << sslSocket->errorString();
}

void smtpDriver::connected()
{
    qDebug() << "Connected ";
}



void smtpDriver::readyRead()
{

    qDebug() <<"readyRead";
    // SMTP is line-oriented

    QString responseLine;
    do
    {
        responseLine = sslSocket->readLine();
        response += responseLine;
    }
    while ( sslSocket->canReadLine() && responseLine[3] != ' ' );

    responseLine.truncate( 3 );

    qDebug() << "Server response code:" <<  responseLine;
    qDebug() << "Server response: " << response;

    if ( state == Init && responseLine == "220" )
    {
        // banner was okay, let's go on
        sslSocket->write("EHLO localhost\r\n");
        //*t << "EHLO localhost" <<"\r\n";
        //t->flush();
        sslSocket->waitForBytesWritten(4000);
        //
        state = HandShake;
        sslSocket->waitForReadyRead(1000);
    }
    //No need, because I'm using socket->startClienEncryption() which makes the SSL handshake for you
    /*else if (state == Tls && responseLine == "250")
    {
        // Trying AUTH
        qDebug() << "STarting Tls";
        *t << "STARTTLS" << "\r\n";
        t->flush();
        state = HandShake;
    }*/
    else if (state == HandShake && responseLine == "250")
    {
       // sslSocket->startClientEncryption();
       // if(!sslSocket->waitForEncrypted(timeout))
        {
       //     qDebug() << sslSocket->errorString();
      //      state = Close;
        }


        //Send EHLO once again but now encrypted

        sslSocket->write("EHLO localhost\r\n");
        sslSocket->waitForBytesWritten(3000);
        //t->flush();
        state = Auth;
        sslSocket->waitForReadyRead(1000);
    }
    else if (state == Auth && responseLine == "250")
    {
        // Trying AUTH
        qDebug() << "Auth";
        sslSocket->write("AUTH LOGIN\r\n");
        sslSocket->waitForBytesWritten(3000);
        //t->flush();
        state = User;
        sslSocket->waitForReadyRead(1000);
    }
    else if (state == User && responseLine == "334")
    {
        //Trying User
        qDebug() << "Username";
        //GMAIL is using XOAUTH2 protocol, which basically means that password and username has to be sent in base64 coding
        //https://developers.google.com/gmail/xoauth2_protocol
        sslSocket->write(QByteArray().append(user).toBase64().append("\r\n"));
        sslSocket->waitForBytesWritten(3000);
        //t->flush();

        state = Pass;
        sslSocket->waitForReadyRead(1000);
    }
    else if (state == Pass && responseLine == "334")
    {
        //Trying pass
        qDebug() << "Pass";
        sslSocket->write(QByteArray().append(pass).toBase64().append("\r\n"));
        sslSocket->waitForBytesWritten(3000);
        //t->flush();

        state = Mail;
        sslSocket->waitForReadyRead(1000);
    }
    else if ( state == Mail && responseLine == "235" )
    {
        // HELO response was okay (well, it has to be)

        //Apperantly for Google it is mandatory to have MAIL FROM and RCPT email formated the following way -> <email@gmail.com>
        qDebug() << "MAIL FROM:<" << from << ">";
        sslSocket->write(QString("MAIL FROM:< %1>\r\n").arg(from).toLocal8Bit());
        sslSocket->waitForBytesWritten(3000);
        //t->flush();

        state = Rcpt;
        sslSocket->waitForReadyRead(1000);
    }
    else if ( state == Rcpt && responseLine == "250" )
    {
        //Apperantly for Google it is mandatory to have MAIL FROM and RCPT email formated the following way -> <email@gmail.com>
       sslSocket->write(QString("RCPT TO:<%1>\r\n").arg(rcpt).toLocal8Bit()); //r
       sslSocket->waitForBytesWritten(3000);
        //t->flush();
        state = Data;
        sslSocket->waitForReadyRead(1000);
    }
    else if ( state == Data && responseLine == "250" )
    {

        sslSocket->write("DATA\r\n");
        sslSocket->waitForBytesWritten(3000);
       // t->flush();
        state = Body;
        sslSocket->waitForReadyRead(1000);
    }
    else if ( state == Body && responseLine == "354" )
    {

         sslSocket->write(QString ("%1\r\n.\r\n").arg(message).toLocal8Bit());
         sslSocket->waitForBytesWritten(3000);
        //t->flush();
        state = Quit;
        sslSocket->waitForReadyRead(1000);
    }
    else if ( state == Quit && responseLine == "250" )
    {
        qDebug() << "Message Sent";
        sslSocket->write("QUIT\r\n");
        //t->flush();
         sslSocket->waitForBytesWritten(3000);
        // here, we just close.
        state = Close;
        sslSocket->waitForReadyRead(1000);
        //emit SmtpError( "Message sent" );
    }
    else if ( state == Close )
    {
       // deleteLater();
        return;
    }
    else
    {
        // something broke.
        //emit SmtpError(response,100);
        state = Close;
        //emit SmtpError( "Failed to send message");
    }
    response = "";
}
