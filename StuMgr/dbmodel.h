#ifndef DBMODEL_H
#define DBMODEL_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QStringList>
#include <iostream>
using namespace std;

class dbmodel{
public:
    QSqlDatabase db;
    QSqlQuery *query;

    ~dbmodel();

    static dbmodel &getInstance(){
        static dbmodel _instance;
        return _instance;
    }

    bool login(QString name, QString passwd);
    QStringList inquire(QString table);
    bool addstu(QString SNo,QString SName,QString SSex,QString SAge);
    bool delstu(QString SNo);
    bool addtea(QString TNo,QString TName);
    bool deltea(QString TNo);
    bool addcou(QString CNo,QString CName,QString TNo);
    bool delcou(QString CNo);
    bool addsc(QString SNo,QString CNo,QString Score);
    bool delsc(QString SNo,QString CNo);

    bool update(QString table,QString column,QString row, QString colvalue, QString rowvalue);

    QString transition(QString str);

    string qstr2str(const QString& qstr){
        QByteArray cdata = qstr.toLocal8Bit();
        return string(cdata);
    }

    QString str2qstr(const string str){
        return QString::fromLocal8Bit(str.data());
    }

private:
    dbmodel();
};

#endif // DBMODEL_H
