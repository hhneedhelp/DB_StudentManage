#include "addteacher.h"
#include "ui_addteacher.h"
#include "dbmodel.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

addTeacher::addTeacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTeacher)
{
    ui->setupUi(this);
}

addTeacher::~addTeacher()
{
    delete ui;
}

void addTeacher::on_btn_confirm_clicked()
{
    QString TName = this->ui->le_tname->text();
    QString TNo = this->ui->le_tno->text();

    QMessageBox msgBox;
    msgBox.setText("请确认教师信息");
    msgBox.setInformativeText( "教师姓名：" + TName + "\n教师编号：" + TNo + "\n" );
    QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
    QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
    msgBox.setDefaultButton(accept);
    int ret = msgBox.exec();
    if(ret == 1)
        msgBox.close();

    //确认，插入数据库
    else if(ret == 0){
        if( dbmodel::getInstance().addtea(TNo, TName) ){
            QMessageBox::information(this,"提示","添加成功");
            this->close();
        }else{
            QMessageBox::information(this,"提示","添加失败");
        }
    }
}


void addTeacher::on_btn_decline_clicked()
{
    this->close();
}

