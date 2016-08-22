#ifndef SQLDRIVER_H
#define SQLDRIVER_H

#include <QObject>
#include <QtSql>
class sqlDriver : public QObject
{
    Q_OBJECT
public:
    explicit sqlDriver(QObject *parent = 0);

signals:
    void SqlError(QString error,int t =0);
public slots:

    void openDataBase(QString location);
    QSqlRelationalTableModel *getModel();
    void refreshModel();
    QStringList Select(QString table, QString value);
private:
    QSqlDatabase  db;
    QSqlQuery *query;
    QSqlRelationalTableModel  *model;
};

#endif // SQLDRIVER_H
