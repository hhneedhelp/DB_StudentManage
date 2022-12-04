/********************************************************************************
** Form generated from reading UI file 'addteacher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHER_H
#define UI_ADDTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addTeacher
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QLineEdit *le_tname;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *le_tno;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_confirm;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_decline;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *addTeacher)
    {
        if (addTeacher->objectName().isEmpty())
            addTeacher->setObjectName("addTeacher");
        addTeacher->resize(370, 257);
        verticalLayout = new QVBoxLayout(addTeacher);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_5 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label = new QLabel(addTeacher);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_2 = new QLabel(addTeacher);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        le_tname = new QLineEdit(addTeacher);
        le_tname->setObjectName("le_tname");

        horizontalLayout_3->addWidget(le_tname);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 3);
        horizontalLayout_3->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_3 = new QLabel(addTeacher);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        le_tno = new QLineEdit(addTeacher);
        le_tno->setObjectName("le_tno");

        horizontalLayout_2->addWidget(le_tno);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 3);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_confirm = new QPushButton(addTeacher);
        btn_confirm->setObjectName("btn_confirm");
        QFont font2;
        font2.setPointSize(12);
        btn_confirm->setFont(font2);

        horizontalLayout->addWidget(btn_confirm);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_decline = new QPushButton(addTeacher);
        btn_decline->setObjectName("btn_decline");
        btn_decline->setFont(font2);

        horizontalLayout->addWidget(btn_decline);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(addTeacher);

        QMetaObject::connectSlotsByName(addTeacher);
    } // setupUi

    void retranslateUi(QDialog *addTeacher)
    {
        addTeacher->setWindowTitle(QCoreApplication::translate("addTeacher", "\346\267\273\345\212\240\346\225\231\345\270\210", nullptr));
        label->setText(QCoreApplication::translate("addTeacher", "\346\267\273\345\212\240\346\225\231\345\270\210", nullptr));
        label_2->setText(QCoreApplication::translate("addTeacher", "\346\225\231\345\270\210\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("addTeacher", "\346\225\231\345\270\210\347\274\226\345\217\267\357\274\232", nullptr));
        btn_confirm->setText(QCoreApplication::translate("addTeacher", "\347\241\256\345\256\232", nullptr));
        btn_decline->setText(QCoreApplication::translate("addTeacher", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTeacher: public Ui_addTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHER_H
