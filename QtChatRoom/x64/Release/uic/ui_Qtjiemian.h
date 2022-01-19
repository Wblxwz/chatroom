/********************************************************************************
** Form generated from reading UI file 'Qtjiemian.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTJIEMIAN_H
#define UI_QTJIEMIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qtjiemian
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *nicheng;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *zhuce;
    QPushButton *bangzhu;
    QPushButton *denglu;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *shezhi;

    void setupUi(QWidget *Qtjiemian)
    {
        if (Qtjiemian->objectName().isEmpty())
            Qtjiemian->setObjectName(QString::fromUtf8("Qtjiemian"));
        Qtjiemian->resize(400, 300);
        widget = new QWidget(Qtjiemian);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 20, 251, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nicheng = new QLineEdit(widget);
        nicheng->setObjectName(QString::fromUtf8("nicheng"));

        gridLayout->addWidget(nicheng, 1, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 3, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 3, 1, 1);

        widget_2 = new QWidget(Qtjiemian);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(64, 150, 251, 91));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        zhuce = new QPushButton(widget_2);
        zhuce->setObjectName(QString::fromUtf8("zhuce"));

        gridLayout_2->addWidget(zhuce, 0, 2, 1, 1);

        bangzhu = new QPushButton(widget_2);
        bangzhu->setObjectName(QString::fromUtf8("bangzhu"));

        gridLayout_2->addWidget(bangzhu, 1, 2, 1, 1);

        denglu = new QPushButton(widget_2);
        denglu->setObjectName(QString::fromUtf8("denglu"));

        gridLayout_2->addWidget(denglu, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        shezhi = new QPushButton(widget_2);
        shezhi->setObjectName(QString::fromUtf8("shezhi"));

        gridLayout_2->addWidget(shezhi, 1, 1, 1, 1);


        retranslateUi(Qtjiemian);

        QMetaObject::connectSlotsByName(Qtjiemian);
    } // setupUi

    void retranslateUi(QWidget *Qtjiemian)
    {
        Qtjiemian->setWindowTitle(QCoreApplication::translate("Qtjiemian", "Qtjiemian", nullptr));
        label->setText(QCoreApplication::translate("Qtjiemian", "\346\230\265\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Qtjiemian", "\345\257\206\347\240\201\357\274\232", nullptr));
        zhuce->setText(QCoreApplication::translate("Qtjiemian", "\346\263\250\345\206\214", nullptr));
        bangzhu->setText(QCoreApplication::translate("Qtjiemian", "\345\270\256\345\212\251", nullptr));
        denglu->setText(QCoreApplication::translate("Qtjiemian", "\347\231\273\345\275\225", nullptr));
        shezhi->setText(QCoreApplication::translate("Qtjiemian", "\350\256\276\347\275\256\357\274\210\345\277\205\351\200\211\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qtjiemian: public Ui_Qtjiemian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTJIEMIAN_H
