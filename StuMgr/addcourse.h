#ifndef ADDCOURSE_H
#define ADDCOURSE_H

#include <QDialog>

namespace Ui {
class addCourse;
}

class addCourse : public QDialog
{
    Q_OBJECT

public:
    explicit addCourse(QWidget *parent = nullptr);
    ~addCourse();
    static addCourse &getInstance(){
        static addCourse _instance;
        return _instance;
    };

private slots:
    void on_btn_confirm_clicked();

    void on_btn_decline_clicked();

private:
    Ui::addCourse *ui;
};

#endif // ADDCOURSE_H
