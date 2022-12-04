#include "addstudent.h"
#include "ui_addstudent.h"
#include "dbmodel.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

addStudent::addStudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addStudent)
{
    ui->setupUi(this);
}

addStudent::~addStudent()
{
    delete ui;
}


void addStudent::on_btn_confirm_clicked()
{
    QString SName = this->ui->le_SName->text();
    QString SNo = this->ui->le_SNo->text();
    int SAge = this->ui->le_SAge->text().toInt();
    QString SSex = this->ui->male->isChecked() ? "男" : "女";

    QMessageBox msgBox;
    msgBox.setText("请确认学生信息");
    msgBox.setInformativeText( "姓名：" + SName + "\n学号：" + SNo + "\n性别：" + SSex + "\n年龄：" + QString().setNum(SAge) );
    QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
    QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
    msgBox.setDefaultButton(accept);
    int ret = msgBox.exec();
    if(ret == 1)
        msgBox.close();

    //确认，插入数据库
    else if(ret == 0){
        if( dbmodel::getInstance().addstu(SNo, SName, SSex, QString().setNum(SAge)) ){
            QMessageBox::information(this,"提示","添加成功");
            this->close();
        }else{
            QMessageBox::information(this,"提示","添加失败");
        }
    }

//    qDebug()<<SName;
//    qDebug()<<SNo;
//    qDebug()<<SClass;
//    qDebug()<<SAge;
}


void addStudent::on_btn_cancel_clicked()
{
    this->close();
}

