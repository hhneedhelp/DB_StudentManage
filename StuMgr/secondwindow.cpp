#include "secondwindow.h"
#include "ui_secondwindow.h"
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
    QString curtext = this->ui->CB_model->currentText();

    //学生表
    if(curtext=="学生信息"){
        this->model->clear();//清空
        //设置表头
        this->model->setHorizontalHeaderItem( 0, new QStandardItem("学生学号") );
        this->model->setHorizontalHeaderItem( 1, new QStandardItem("学生姓名") );
        this->model->setHorizontalHeaderItem( 2, new QStandardItem("学生性别") );
        this->model->setHorizontalHeaderItem( 3, new QStandardItem("学生年龄") );

        QStringList r = dbmodel::getInstance().inquire("student");
//        this->model->setItem(0,1,new QStandardItem(r.at(0)));
        int row=0;
        for(int i=0; i<r.size();i++){
            QString tmp = r.at(i);
            switch(i%5){
                case 0:this->model->setItem(row,0,new QStandardItem(tmp));break;
                case 1:this->model->setItem(row,1,new QStandardItem(tmp));break;
                case 2:this->model->setItem(row,2,new QStandardItem(tmp));break;
                case 3:this->model->setItem(row,3,new QStandardItem(tmp));break;
                case 4:row++;break;
            }
        }
//        QList<QString>::Iterator it = r.begin(),itend=r.end();
//        for(;it!=itend;it++){
//            qDebug<<it->toStdString();
//        }

        this->ui->tableView->setModel(this->model);


        //教师表
    }else if(curtext=="教师信息"){
        this->model->clear();//清空
        this->model->setHorizontalHeaderItem( 0, new QStandardItem("教师编号") );
        this->model->setHorizontalHeaderItem( 1, new QStandardItem("教师姓名") );

        QStringList r = dbmodel::getInstance().inquire("teacher");

        int row=0;
        for(int i=0; i<r.size();i++){
            QString tmp = r.at(i);
            switch(i%5){
                case 0:this->model->setItem(row,0,new QStandardItem(tmp));break;
                case 1:this->model->setItem(row,1,new QStandardItem(tmp));break;
                case 2:row++;break;
            }
        }

        this->ui->tableView->setModel(this->model);

    }else if(curtext=="课程信息"){
        this->model->clear();//清空
        this->model->setHorizontalHeaderItem( 0, new QStandardItem("课程编号") );
        this->model->setHorizontalHeaderItem( 1, new QStandardItem("课程名") );
        this->model->setHorizontalHeaderItem( 2, new QStandardItem("教师编号") );

        QStringList r = dbmodel::getInstance().inquire("course");

        int row=0;
        for(int i=0; i<r.size();i++){
            QString tmp = r.at(i);
            switch(i%5){
                case 0:this->model->setItem(row,0,new QStandardItem(tmp));break;
                case 1:this->model->setItem(row,1,new QStandardItem(tmp));break;
                case 2:this->model->setItem(row,2,new QStandardItem(tmp));break;
                case 3:row++;break;
            }
        }

        this->ui->tableView->setModel(this->model);

    }else if(curtext=="选课信息"){
        this->model->clear();//清空
        this->model->setHorizontalHeaderItem( 0, new QStandardItem("学生学号") );
        this->model->setHorizontalHeaderItem( 1, new QStandardItem("课程编号") );
        this->model->setHorizontalHeaderItem( 2, new QStandardItem("得分") );

        QStringList r = dbmodel::getInstance().inquire("sc");

        int row=0;
        for(int i=0; i<r.size();i++){
            QString tmp = r.at(i);
            switch(i%5){
                case 0:this->model->setItem(row,0,new QStandardItem(tmp));break;
                case 1:this->model->setItem(row,1,new QStandardItem(tmp));break;
                case 2:this->model->setItem(row,2,new QStandardItem(tmp));break;
                case 3:row++;break;
            }
        }

        this->ui->tableView->setModel(this->model);

    }
}


void secondwindow::on_btn_exit_clicked()
{
    this->close();
}


void secondwindow::on_btn_add_clicked()
{
    QString curtext = this->ui->CB_model->currentText();

    if(curtext=="学生信息"){
        addStudent::getInstance().show();
    }else if(curtext=="教师信息"){
        addTeacher::getInstance().show();
    }else if(curtext=="课程信息"){
        addCourse::getInstance().show();
    }else if(curtext=="选课信息"){
        addSC::getInstance().show();
    }
}


void secondwindow::on_btn_del_clicked()
{
    QString curtext = this->ui->CB_model->currentText();

    if(curtext=="学生信息"){
        int row = this->ui->tableView->currentIndex().row();
        QModelIndex index = this->model->index(row, 0, QModelIndex());
        QString SNo = index.data().toString();
        index = this->model->index(row, 1, QModelIndex());
        QString SName = index.data().toString();

        QMessageBox msgBox;
        msgBox.setText("确认删除");
        msgBox.setInformativeText( "即将删除学生："+SName+"(学生学号为"+SNo+")" );
        QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
        QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
        msgBox.setDefaultButton(accept);
        int ret = msgBox.exec();
        if(ret == 1)
            msgBox.close();

        //确认，删除
        else if(ret == 0){
            if(dbmodel::getInstance().delstu(SNo)){
                QMessageBox::information(this,"提示","删除成功");
            }else{
                QMessageBox::information(this,"提示","删除失败");
            }
        }
        secondwindow::on_bt_inquire_clicked();

    }else if(curtext=="教师信息"){
        int row = this->ui->tableView->currentIndex().row();
        QModelIndex index = this->model->index(row, 0, QModelIndex());
        QString TNo = index.data().toString();
        index = this->model->index(row, 1, QModelIndex());
        QString TName = index.data().toString();

        QMessageBox msgBox;
        msgBox.setText("确认删除");
        msgBox.setInformativeText( "即将删除教师："+TName+"(学生学号为"+TNo+")" );
        QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
        QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
        msgBox.setDefaultButton(accept);
        int ret = msgBox.exec();
        if(ret == 1)
            msgBox.close();

        //确认，删除
        else if(ret == 0){
            if(dbmodel::getInstance().deltea(TNo)){
                QMessageBox::information(this,"提示","删除成功");
            }else{
                QMessageBox::information(this,"提示","删除失败");
            }
        }
        secondwindow::on_bt_inquire_clicked();

    }else if(curtext=="课程信息"){
        int row = this->ui->tableView->currentIndex().row();
        QModelIndex index = this->model->index(row, 0, QModelIndex());
        QString CNo = index.data().toString();
        index = this->model->index(row, 1, QModelIndex());
        QString CName = index.data().toString();

        QMessageBox msgBox;
        msgBox.setText("确认删除");
        msgBox.setInformativeText( "即将删除课程："+CName+"(课程号为"+CNo+")" );
        QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
        QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
        msgBox.setDefaultButton(accept);
        int ret = msgBox.exec();
        if(ret == 1)
            msgBox.close();

        //确认，删除
        else if(ret == 0){
            if(dbmodel::getInstance().delcou(CNo)){
                QMessageBox::information(this,"提示","删除成功");
            }else{
                QMessageBox::information(this,"提示","删除失败");
            }
        }
        secondwindow::on_bt_inquire_clicked();

    }else if(curtext=="选课信息"){
        int row = this->ui->tableView->currentIndex().row();
        QModelIndex index = this->model->index(row, 0, QModelIndex());
        QString SNo = index.data().toString();
        index = this->model->index(row, 1, QModelIndex());
        QString CNo = index.data().toString();

        QMessageBox msgBox;
        msgBox.setText("确认删除");
        msgBox.setInformativeText( "即将删除学生编号："+SNo+"(选修课程号为"+CNo+")" );
        QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
        QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
        msgBox.setDefaultButton(accept);
        int ret = msgBox.exec();
        if(ret == 1)
            msgBox.close();

        //确认，删除
        else if(ret == 0){
            if(dbmodel::getInstance().delsc(SNo,CNo)){
                QMessageBox::information(this,"提示","删除成功");
            }else{
                QMessageBox::information(this,"提示","删除失败");
            }
        }
        secondwindow::on_bt_inquire_clicked();

    }
}


void secondwindow::on_tableView_pressed(const QModelIndex &index)
{

}


void secondwindow::on_btn_update_clicked()
{
    QString table = this->ui->CB_model->currentText();//表名

    int rownumber = this->ui->tableView->currentIndex().row();
    int columnnumber = this->ui->tableView->currentIndex().column();
    QModelIndex index = this->model->index(rownumber, 0, QModelIndex());
    QString rowvalue = index.data().toString();//修改列的首元值
    index = this->model->index(rownumber, columnnumber, QModelIndex());
    QString columnvalue = index.data().toString();//修改值

    QString row = this->model->horizontalHeaderItem(0)->text();
    QString column = this->model->horizontalHeaderItem(columnnumber)->text();

//    qDebug()<<"row:"+row+" "+rowvalue;
//    qDebug()<<"column:"+column+" "+columnvalue;

//    dbmodel::getInstance().update(table,column,row,columnvalue,rowvalue);

    QMessageBox msgBox;
    msgBox.setText("确认修改");
    msgBox.setInformativeText( "即将修改为"+row+"："+rowvalue+";"+column+"："+columnvalue );
    QPushButton *accept = msgBox.addButton("确定",QMessageBox::AcceptRole);//0
    QPushButton *reject = msgBox.addButton("取消",QMessageBox::RejectRole);//1
    msgBox.setDefaultButton(accept);
    int ret = msgBox.exec();
    if(ret == 1)
        msgBox.close();

    //确认，修改
    else if(ret == 0){
        if(dbmodel::getInstance().update(table,column,row,columnvalue,rowvalue)){
            QMessageBox::information(this,"提示","修改成功");

        }else{
            QMessageBox::information(this,"提示","修改失败");
        }
    }
    secondwindow::on_bt_inquire_clicked();

}

