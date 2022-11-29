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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *CB_model;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_inquire;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(665, 425);
        centralwidget = new QWidget(secondwindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(6, 6, 511, 351));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        CB_model = new QComboBox(widget);
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

        bt_inquire = new QPushButton(widget);
        bt_inquire->setObjectName("bt_inquire");
        bt_inquire->setFont(font);

        horizontalLayout->addWidget(bt_inquire);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(3, 8);
        horizontalLayout->setStretch(4, 4);

        verticalLayout->addLayout(horizontalLayout);

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
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
