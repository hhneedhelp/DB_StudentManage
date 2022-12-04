/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *CB_model;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_inquire;
    QPushButton *btn_exit;
    QPushButton *btn_add;
    QPushButton *btn_del;
    QPushButton *btn_update;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(665, 425);
        centralwidget = new QWidget(secondwindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(6, 6, 511, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        CB_model = new QComboBox(layoutWidget);
        CB_model->addItem(QString());
        CB_model->addItem(QString());
        CB_model->addItem(QString());
        CB_model->addItem(QString());
        CB_model->setObjectName("CB_model");
        CB_model->setFont(font);
        CB_model->setFrame(true);

        horizontalLayout->addWidget(CB_model);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bt_inquire = new QPushButton(layoutWidget);
        bt_inquire->setObjectName("bt_inquire");
        bt_inquire->setFont(font);

        horizontalLayout->addWidget(bt_inquire);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(3, 8);
        horizontalLayout->setStretch(4, 4);

        verticalLayout->addLayout(horizontalLayout);

        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(540, 250, 91, 31));
        QFont font1;
        font1.setPointSize(14);
        btn_exit->setFont(font1);
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");
        btn_add->setGeometry(QRect(540, 70, 91, 31));
        btn_add->setFont(font1);
        btn_del = new QPushButton(centralwidget);
        btn_del->setObjectName("btn_del");
        btn_del->setGeometry(QRect(540, 130, 91, 31));
        btn_del->setFont(font1);
        btn_update = new QPushButton(centralwidget);
        btn_update->setObjectName("btn_update");
        btn_update->setGeometry(QRect(540, 190, 91, 31));
        btn_update->setFont(font1);
        secondwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secondwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 665, 17));
        secondwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(secondwindow);
        statusbar->setObjectName("statusbar");
        secondwindow->setStatusBar(statusbar);

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QMainWindow *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "\346\225\260\346\215\256\350\241\250\357\274\232", nullptr));
        CB_model->setItemText(0, QCoreApplication::translate("secondwindow", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        CB_model->setItemText(1, QCoreApplication::translate("secondwindow", "\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
        CB_model->setItemText(2, QCoreApplication::translate("secondwindow", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        CB_model->setItemText(3, QCoreApplication::translate("secondwindow", "\351\200\211\350\257\276\344\277\241\346\201\257", nullptr));

        bt_inquire->setText(QCoreApplication::translate("secondwindow", "\346\237\245\350\257\242", nullptr));
        btn_exit->setText(QCoreApplication::translate("secondwindow", "\351\200\200\345\207\272", nullptr));
        btn_add->setText(QCoreApplication::translate("secondwindow", "\346\267\273\345\212\240", nullptr));
        btn_del->setText(QCoreApplication::translate("secondwindow", "\345\210\240\351\231\244", nullptr));
        btn_update->setText(QCoreApplication::translate("secondwindow", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
