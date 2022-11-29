#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>

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

private:
    Ui::secondwindow *ui;
    QStandardItemModel *model;
};

#endif // SECONDWINDOW_H
