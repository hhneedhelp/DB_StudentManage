#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <iostream>
using namespace std;



secondwindow::secondwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);
    this->model = new QStandardItemModel;
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_bt_inquire_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");  //连接本地主机
        db.setPort(3306);
        db.setDatabaseName("test");//数据库名
        db.setUserName("root");
        db.setPassword("12345");
        bool ok = db.open();
        if (ok){
            QMessageBox::information(this, "infor", "link success");
        }
        else {
            QMessageBox::information(this, "infor", "link failed");
            qDebug()<<"error open database because";//<<db.lastError().text();
        }

        QSqlQuery *query =new QSqlQuery(db);
        int ans = query->exec(QString("select * from `test`.`table`"));


        if (!ans)
        {
            qDebug()<< "select *from error：" << query->lastError();
        }
        else
        {
//            query->next();
//            qDebug() << query->value(0).toInt();
//            qDebug() << query->value(1).toString();
            while (query->next()) {
                    int name = query->value(0).toInt();
                    QString salary = query->value(1).toString();
                    qDebug() << name << salary;
            }
        }



    QString curtext = this->ui->CB_model->currentText();

    if(curtext=="学生信息"){
        //设置表头
        this->model->setHorizontalHeaderItem( 0, new QStandardItem("学号") );
        this->model->setHorizontalHeaderItem( 1, new QStandardItem("姓名") );
        this->model->setHorizontalHeaderItem( 2, new QStandardItem("班级") );
        this->model->setHorizontalHeaderItem( 3, new QStandardItem("性别") );
        this->model->setHorizontalHeaderItem( 4, new QStandardItem("年龄") );

        this->ui->tableView->setModel(this->model);
    }else if(curtext=="教师信息"){

    }else if(curtext=="课程信息"){

    }else if(curtext=="选课信息"){

    }
}

