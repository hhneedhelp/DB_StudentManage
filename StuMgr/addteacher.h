#ifndef ADDTEACHER_H
#define ADDTEACHER_H

#include <QDialog>

namespace Ui {
class addTeacher;
}

class addTeacher : public QDialog
{
    Q_OBJECT

public:
    explicit addTeacher(QWidget *parent = nullptr);
    ~addTeacher();
    static addTeacher &getInstance(){
        static addTeacher _instance;
        return _instance;
    };

private slots:
    void on_btn_confirm_clicked();

    void on_btn_decline_clicked();

private:
    Ui::addTeacher *ui;
};

#endif // ADDTEACHER_H
