#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include "sqldriver.h"
#include "smtpdriver.h"
#include "smtp.h"
#include "sendthread.h"
#include <QThread>
#include <QSystemTrayIcon>

class QAction;
class QMenu;


namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = 0);
    ~MainView();


public slots:
    void refreshTable();
    void Send(QString Subject, QString msg);
    QString DayToExactlyItem(QString item, qint64 daysTo);
    void closeEvent(QCloseEvent *event);

    void iconActivated(QSystemTrayIcon::ActivationReason reason);
private slots:
    void on_btnRefresh_clicked();

private:
    Ui::MainView *ui;
    sqlDriver * sql;
    smtpDriver *smtp;
    Smtp *sm;
    SendThread *mThread;
    QString dateNow;
    QDateTime nowDate;
    QDateTime readDaete;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

    QAction *restoreAction;
    QAction *quitAction;
    void createActions();
    void createTrayIcon();
};

#endif // MAINVIEW_H
