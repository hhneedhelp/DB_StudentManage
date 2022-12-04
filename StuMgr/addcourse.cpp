#include "addcourse.h"
#include "ui_addcourse.h"
#include "dbmodel.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

addCourse::addCourse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCourse)
{
    ui->setupUi(this);
}

addCourse::~addCourse()
{
    delete ui;
}

void addCourse::on_btn_confirm_clicked()
{
    QString CName = this->ui->le_cname->text();
    QString CNo = this->ui->le_cno->text();
    QString  TNo = this->ui->le_tno->text();

    QMessageBox msgBox;
    msgBox.setText("请确认课程信息");
    msgBox.setInformativeText( "课程名：" + CName + "\n课程号：" + CNo + "\n任课教师编号：" + TNo  );
    QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
    QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
    msgBox.setDefaultButton(accept);
    int ret = msgBox.exec();
    if(ret == 1)
        msgBox.close();

    //确认，插入数据库
    else if(ret == 0){
        if( dbmodel::getInstance().addcou(CNo, CName, TNo ) ){
            QMessageBox::information(this,"提示","添加成功");
            this->close();
        }else{
            QMessageBox::information(this,"提示","添加失败");
        }
    }
}


void addCourse::on_btn_decline_clicked()
{

}

