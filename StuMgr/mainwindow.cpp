#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbmodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_clicked()
{
    this->close();
}

void MainWindow::on_login_clicked()
{
    QString name = this->ui->cb_user->currentText();
    QString passwd = this->ui->le_passwd->text();
    if( dbmodel::getInstance().login(name,passwd) ){
            QMessageBox::information(this, "提示", "登录成功");
            MainWindow::sw.show();
    }else {
        QMessageBox::information(this, "提示", "登录失败");
        qDebug()<<"error open database because";//<<db.lastError().text();
    }
}

