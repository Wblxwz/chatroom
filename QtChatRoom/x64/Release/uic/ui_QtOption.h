/********************************************************************************
** Form generated from reading UI file 'QtOption.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOPTION_H
#define UI_QTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOption
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *IP;
    QLineEdit *DuanKou;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bz;
    QSpacerItem *horizontalSpacer;
    QPushButton *qd;

    void setupUi(QDialog *QtOption)
    {
        if (QtOption->objectName().isEmpty())
            QtOption->setObjectName(QString::fromUtf8("QtOption"));
        QtOption->resize(499, 171);
        gridLayout_2 = new QGridLayout(QtOption);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(QtOption);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        IP = new QLineEdit(widget);
        IP->setObjectName(QString::fromUtf8("IP"));

        gridLayout->addWidget(IP, 0, 1, 1, 1);

        DuanKou = new QLineEdit(widget);
        DuanKou->setObjectName(QString::fromUtf8("DuanKou"));

        gridLayout->addWidget(DuanKou, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(QtOption);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bz = new QPushButton(widget_2);
        bz->setObjectName(QString::fromUtf8("bz"));

        horizontalLayout->addWidget(bz);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        qd = new QPushButton(widget_2);
        qd->setObjectName(QString::fromUtf8("qd"));

        horizontalLayout->addWidget(qd);


        gridLayout_2->addWidget(widget_2, 2, 0, 1, 1);


        retranslateUi(QtOption);
        QObject::connect(qd, SIGNAL(clicked()), QtOption, SLOT(close()));

        QMetaObject::connectSlotsByName(QtOption);
    } // setupUi

    void retranslateUi(QDialog *QtOption)
    {
        QtOption->setWindowTitle(QCoreApplication::translate("QtOption", "QtOption", nullptr));
        label_2->setText(QCoreApplication::translate("QtOption", "\347\253\257\345\217\243\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("QtOption", "IP\357\274\232", nullptr));
        bz->setText(QCoreApplication::translate("QtOption", "\345\270\256\345\212\251", nullptr));
        qd->setText(QCoreApplication::translate("QtOption", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtOption: public Ui_QtOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOPTION_H
