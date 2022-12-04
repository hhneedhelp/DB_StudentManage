#ifndef ADDSC_H
#define ADDSC_H

#include <QDialog>

namespace Ui {
class addSC;
}

class addSC : public QDialog
{
    Q_OBJECT

public:
    explicit addSC(QWidget *parent = nullptr);
    ~addSC();
    static addSC &getInstance(){
        static addSC _instance;
        return _instance;
    };

private slots:
    void on_btn_confirm_clicked();

    void on_btn_decline_clicked();

private:
    Ui::addSC *ui;
};

#endif // ADDSC_H
