#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class addStudent; }
QT_END_NAMESPACE

class addStudent : public QDialog
{
    Q_OBJECT

public:
    addStudent(QWidget *parent = nullptr);
    ~addStudent();
    static addStudent &getInstance(){
        static addStudent _instance;
        return _instance;
    };

private slots:
    void on_btn_confirm_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::addStudent *ui;
};
#endif // ADDSTUDENT_H
