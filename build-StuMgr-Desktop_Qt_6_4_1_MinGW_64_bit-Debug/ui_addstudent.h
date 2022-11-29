/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addStudent
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QLineEdit *le_SName;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_6;
    QLineEdit *le_SClass;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QLineEdit *le_SNo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QRadioButton *male;
    QRadioButton *female;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_5;
    QLineEdit *le_SAge;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_confirm;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *addStudent)
    {
        if (addStudent->objectName().isEmpty())
            addStudent->setObjectName("addStudent");
        addStudent->resize(350, 392);
        verticalLayout = new QVBoxLayout(addStudent);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(addStudent);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label_2 = new QLabel(addStudent);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        le_SName = new QLineEdit(addStudent);
        le_SName->setObjectName("le_SName");
        le_SName->setClearButtonEnabled(false);

        horizontalLayout->addWidget(le_SName);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        label_6 = new QLabel(addStudent);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        le_SClass = new QLineEdit(addStudent);
        le_SClass->setObjectName("le_SClass");

        horizontalLayout_6->addWidget(le_SClass);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        horizontalLayout_6->setStretch(2, 5);
        horizontalLayout_6->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        label_3 = new QLabel(addStudent);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        le_SNo = new QLineEdit(addStudent);
        le_SNo->setObjectName("le_SNo");

        horizontalLayout_2->addWidget(le_SNo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 5);
        horizontalLayout_2->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        label_4 = new QLabel(addStudent);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        male = new QRadioButton(addStudent);
        male->setObjectName("male");
        QFont font2;
        font2.setPointSize(12);
        male->setFont(font2);

        horizontalLayout_3->addWidget(male);

        female = new QRadioButton(addStudent);
        female->setObjectName("female");
        female->setFont(font2);

        horizontalLayout_3->addWidget(female);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 5);
        horizontalLayout_3->setStretch(3, 5);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        label_5 = new QLabel(addStudent);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        le_SAge = new QLineEdit(addStudent);
        le_SAge->setObjectName("le_SAge");

        horizontalLayout_4->addWidget(le_SAge);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 5);
        horizontalLayout_4->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        btn_confirm = new QPushButton(addStudent);
        btn_confirm->setObjectName("btn_confirm");
        btn_confirm->setFont(font2);

        horizontalLayout_5->addWidget(btn_confirm);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btn_cancel = new QPushButton(addStudent);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setFont(font2);

        horizontalLayout_5->addWidget(btn_cancel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 2);
        horizontalLayout_5->setStretch(3, 2);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 2);

        retranslateUi(addStudent);

        QMetaObject::connectSlotsByName(addStudent);
    } // setupUi

    void retranslateUi(QDialog *addStudent)
    {
        addStudent->setWindowTitle(QCoreApplication::translate("addStudent", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label->setText(QCoreApplication::translate("addStudent", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_2->setText(QCoreApplication::translate("addStudent", "\345\247\223\345\220\215\357\274\232", nullptr));
        le_SName->setPlaceholderText(QCoreApplication::translate("addStudent", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("addStudent", "\347\217\255\347\272\247\357\274\232", nullptr));
        le_SClass->setPlaceholderText(QCoreApplication::translate("addStudent", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\347\217\255\347\272\247", nullptr));
        label_3->setText(QCoreApplication::translate("addStudent", "\345\255\246\345\217\267\357\274\232", nullptr));
        le_SNo->setPlaceholderText(QCoreApplication::translate("addStudent", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("addStudent", "\346\200\247\345\210\253\357\274\232", nullptr));
        male->setText(QCoreApplication::translate("addStudent", "\347\224\267", nullptr));
        female->setText(QCoreApplication::translate("addStudent", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("addStudent", "\345\271\264\351\276\204\357\274\232", nullptr));
        le_SAge->setPlaceholderText(QCoreApplication::translate("addStudent", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\271\264\351\276\204", nullptr));
        btn_confirm->setText(QCoreApplication::translate("addStudent", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("addStudent", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStudent: public Ui_addStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
