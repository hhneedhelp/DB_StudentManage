#include "addsc.h"
#include "ui_addsc.h"
#include "dbmodel.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

addSC::addSC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSC)
{
    ui->setupUi(this);
}

addSC::~addSC()
{
    delete ui;
}

void addSC::on_btn_confirm_clicked()
{
    QString SNo = this->ui->le_sno->text();
    QString CNo = this->ui->le_cno->text();
    QString Score = this->ui->le_score->text();

    QMessageBox msgBox;
    msgBox.setText("请确认选课信息");
    msgBox.setInformativeText( "学生编号：" + SNo + "\n课程编号：" + CNo + "\n得分：" + Score  );
    QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
    QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
    msgBox.setDefaultButton(accept);
    int ret = msgBox.exec();
    if(ret == 1)
        msgBox.close();

    //确认，插入数据库
    else if(ret == 0){
        if( dbmodel::getInstance().addsc(SNo, CNo, Score) ){
            QMessageBox::information(this,"提示","添加成功");
            this->close();
        }else{
            QMessageBox::information(this,"提示","添加失败");
        }
    }
}


void addSC::on_btn_decline_clicked()
{
    this->close();
}

