#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>
#include "dbmodel.h"
#include "addstudent.h"
#include "addteacher.h"
#include "addcourse.h"
#include "addsc.h"


namespace Ui {
class secondwindow;
}

class secondwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();

private slots:
    void on_bt_inquire_clicked();

    void on_btn_exit_clicked();

    void on_btn_add_clicked();

    void on_btn_del_clicked();

    void on_tableView_pressed(const QModelIndex &index);

    void on_btn_update_clicked();

private:
    Ui::secondwindow *ui;
    QStandardItemModel *model;
    QString chosen_first;//tableview 被选中行的第一列内容
};

#endif // SECONDWINDOW_H
