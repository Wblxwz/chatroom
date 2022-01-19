/********************************************************************************
** Form generated from reading UI file 'QtServer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSERVER_H
#define UI_QTSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtServer
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *xiaoxijilu;
    QTextEdit *fasongkuang;
    QPushButton *fs2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *iplineEdit;
    QComboBox *comboBox;
    QPushButton *fs3;
    QPushButton *StartServer;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *port;
    QLabel *label_3;
    QPushButton *bz2;
    QPushButton *guanbi;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *zaixian;
    QListWidget *list;

    void setupUi(QMainWindow *QtServer)
    {
        if (QtServer->objectName().isEmpty())
            QtServer->setObjectName(QString::fromUtf8("QtServer"));
        QtServer->resize(346, 616);
        centralWidget = new QWidget(QtServer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        xiaoxijilu = new QTextEdit(widget_2);
        xiaoxijilu->setObjectName(QString::fromUtf8("xiaoxijilu"));

        verticalLayout->addWidget(xiaoxijilu);

        fasongkuang = new QTextEdit(widget_2);
        fasongkuang->setObjectName(QString::fromUtf8("fasongkuang"));

        verticalLayout->addWidget(fasongkuang);

        fs2 = new QPushButton(widget_2);
        fs2->setObjectName(QString::fromUtf8("fs2"));

        verticalLayout->addWidget(fs2);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iplineEdit = new QLineEdit(widget);
        iplineEdit->setObjectName(QString::fromUtf8("iplineEdit"));

        gridLayout->addWidget(iplineEdit, 0, 1, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        fs3 = new QPushButton(widget);
        fs3->setObjectName(QString::fromUtf8("fs3"));

        gridLayout->addWidget(fs3, 3, 2, 1, 1);

        StartServer = new QPushButton(widget);
        StartServer->setObjectName(QString::fromUtf8("StartServer"));

        gridLayout->addWidget(StartServer, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        port = new QLineEdit(widget);
        port->setObjectName(QString::fromUtf8("port"));

        gridLayout->addWidget(port, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        bz2 = new QPushButton(widget);
        bz2->setObjectName(QString::fromUtf8("bz2"));

        gridLayout->addWidget(bz2, 2, 2, 1, 1);

        guanbi = new QPushButton(widget);
        guanbi->setObjectName(QString::fromUtf8("guanbi"));

        gridLayout->addWidget(guanbi, 1, 2, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        zaixian = new QLabel(widget_3);
        zaixian->setObjectName(QString::fromUtf8("zaixian"));

        horizontalLayout->addWidget(zaixian);

        list = new QListWidget(widget_3);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);


        gridLayout_2->addWidget(widget_3, 2, 0, 1, 1);

        QtServer->setCentralWidget(centralWidget);

        retranslateUi(QtServer);

        QMetaObject::connectSlotsByName(QtServer);
    } // setupUi

    void retranslateUi(QMainWindow *QtServer)
    {
        QtServer->setWindowTitle(QCoreApplication::translate("QtServer", "QtServer", nullptr));
        fs2->setText(QCoreApplication::translate("QtServer", "\345\217\221\351\200\201", nullptr));
        fs3->setText(QCoreApplication::translate("QtServer", "\345\217\221\351\200\201", nullptr));
        StartServer->setText(QCoreApplication::translate("QtServer", "\345\220\257\345\212\250\346\234\215\345\212\241\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("QtServer", "\347\253\257\345\217\243\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("QtServer", "\345\256\242\346\210\267\347\253\257\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QtServer", "IP\357\274\232", nullptr));
        bz2->setText(QCoreApplication::translate("QtServer", "\345\270\256\345\212\251", nullptr));
        guanbi->setText(QCoreApplication::translate("QtServer", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("QtServer", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\232", nullptr));
        zaixian->setText(QCoreApplication::translate("QtServer", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtServer: public Ui_QtServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSERVER_H
