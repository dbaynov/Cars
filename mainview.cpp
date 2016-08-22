#include "mainview.h"
#include "ui_mainview.h"
#include <QDateTime>
#include <QtGui>

#define databaseLocation "smb://192.168.1.2/Downloads/testdatabase.db"
#define database "CARS1"
#define notification 5
#define mailSender "infocarabrites72@gmail.com"
#define mailSenderPass "12345678900987654321!@#"
#define mailSendTo "dbaynov@abrites.com"
#define mailSendTO2 "kaloyan@abrites.com"
#define mailSenderTO3 "astoynov@abrites.com"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);


    nowDate = QDateTime::currentDateTime();
    dateNow =  nowDate.toString("dd.MM.yyyy");
    this->setWindowTitle("Abrites Cars");
    ui->statusBar->showMessage( QString("Date is : %1").arg(dateNow));
    sql = new sqlDriver(this);
    smtp = new smtpDriver(this);
    sql->openDataBase(databaseLocation);
    createActions();
    createTrayIcon();
    connect(sql,SIGNAL(SqlError(QString,int)),ui->statusBar,SLOT(showMessage(QString,int)));
    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
    refreshTable();


}

MainView::~MainView()
{
    delete ui;
}

void MainView::on_btnRefresh_clicked()
{
    refreshTable();

}

void MainView::refreshTable()
{
    sql->refreshModel();
    ui->tableView->setModel(sql->getModel());
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    DayToExactlyItem("DataKasko",notification);
    DayToExactlyItem("DataGTP",notification);
    DayToExactlyItem("DataGrajdanska",notification);
    DayToExactlyItem("DataChasServiz",notification);


}

void MainView::Send(QString Subject ,QString msg)
{
     SendThread *mThread = new SendThread();
     mThread->Set(mailSender,mailSendTo,Subject,msg,mailSender,mailSenderPass);
     mThread->start();

     SendThread *mThread2 = new SendThread();
     mThread2->Set(mailSender,mailSendTO2,Subject,msg,mailSender,mailSenderPass);
     mThread2->start();

     SendThread *mThread3 = new SendThread();
     mThread3->Set(mailSender,mailSenderTO3,Subject,msg,mailSender,mailSenderPass);
     mThread3->start();



}

QString MainView::DayToExactlyItem(QString item,qint64 daysTo)
{
    qint64 days = 0;
    QString t;
    int index = 0 ;
    bool b = false;
    QStringList temp = sql->Select(database,item);
     foreach (QString i , temp) {
         readDaete =QDateTime::fromString(i,("dd.MM.yyyy"));
         days = nowDate.daysTo(readDaete);
         if((days >0) && (days <= daysTo))
         {
             t.append(sql->Select(database,"id").at(index));
             t.append(" ");
             ui->statusBar->showMessage(QString("%1 Days left to %2 %3").arg(QString::number(days)).arg(t).arg(item));
           b = true;
         }
         if(b)
         {

             Send(item,QString("%1 Days left to %2 %3").arg(QString::number(days)).arg(t).arg(item));
             b=false;
         }
         index++;
     }

    return t;
}




void MainView::createActions()
{
    restoreAction = new QAction(tr("&Open"),this);
    connect(restoreAction,SIGNAL(triggered(bool)),this,SLOT(showNormal()));
    connect(restoreAction,SIGNAL(triggered(bool)),this,SLOT(refreshTable()));
    quitAction = new QAction(tr("&Exit"),this);
    connect(quitAction,SIGNAL(triggered(bool)),qApp,SLOT(quit()));


}
void MainView::closeEvent(QCloseEvent *event)
{
        QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon(1);
     trayIcon->show();
     trayIcon->showMessage(tr("Abrite Cars"),tr("Application is  still running on Tray"),icon,2);
    if(trayIcon->isVisible())
    {
        hide();
        event->ignore();
    }
}



void MainView::createTrayIcon()
{
    trayIconMenu= new QMenu(this);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);
    trayIcon = new QSystemTrayIcon(this);
    QIcon icon(":/images/car.ico");
    trayIcon->setIcon(icon);
    trayIcon->setContextMenu(trayIconMenu);

}

void MainView::iconActivated(QSystemTrayIcon::ActivationReason reason)
{

    QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon(1);
    switch (reason) {
    case QSystemTrayIcon::Trigger:
        trayIcon->showMessage(tr("Abrite Cars"),tr("Double Click to open aplicatio"),icon,2);
    case QSystemTrayIcon::DoubleClick:
        restoreAction->triggered(true);
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    default:
        ;
    }
}
