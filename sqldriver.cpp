#include "sqldriver.h"

sqlDriver::sqlDriver(QObject *parent) : QObject(parent)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    model = new QSqlRelationalTableModel(this);
}

void sqlDriver::openDataBase(QString location)
{
    db.setDatabaseName(location);

    if(!db.open())
    {
        emit SqlError(db.lastError().text());
        return;
    }

     model->setTable("CARS1");
     model->select();
     model->setEditStrategy(QSqlTableModel::OnRowChange);

}

QSqlRelationalTableModel * sqlDriver::getModel()
{
    return model;
}

void sqlDriver::refreshModel()
{
    model->setTable("CARS1");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);
}


QStringList sqlDriver::Select(QString table,QString value)
{
    query = new QSqlQuery(db);
    QString temp = QString("SELECT %1 FROM %2 ORDER BY rowid").arg(value).arg(table);
    QList<QString> temp2;
    query->prepare(temp);
    if(!query->exec())
    {
        emit SqlError(query->lastError().text());
        return temp2;
    }

    while (query->next())
    {
        temp2.append(query->value(0).toString());


    }

    return temp2;
}
