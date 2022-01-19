/********************************************************************************
** Form generated from reading UI file 'QtChatRoom.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCHATROOM_H
#define UI_QTCHATROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtChatRoomClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *ltip;
    QLabel *label_4;
    QLineEdit *ltdk;
    QLabel *label_5;
    QLineEdit *kehuduan;
    QLabel *label_7;
    QComboBox *zaixianbox;
    QPushButton *fasong4;
    QPushButton *shuaxin;
    QPushButton *shangxian;
    QPushButton *xiaxian;
    QLabel *label;
    QTextEdit *xiaoxikuang;
    QLabel *label_2;
    QTextEdit *xiaoxijilu;
    QPushButton *fasong;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *zaixian;
    QListWidget *dqzx;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtChatRoomClass)
    {
        if (QtChatRoomClass->objectName().isEmpty())
            QtChatRoomClass->setObjectName(QString::fromUtf8("QtChatRoomClass"));
        QtChatRoomClass->resize(356, 787);
        centralWidget = new QWidget(QtChatRoomClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        ltip = new QLineEdit(widget);
        ltip->setObjectName(QString::fromUtf8("ltip"));

        verticalLayout->addWidget(ltip);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        ltdk = new QLineEdit(widget);
        ltdk->setObjectName(QString::fromUtf8("ltdk"));

        verticalLayout->addWidget(ltdk);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        kehuduan = new QLineEdit(widget);
        kehuduan->setObjectName(QString::fromUtf8("kehuduan"));

        verticalLayout->addWidget(kehuduan);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        zaixianbox = new QComboBox(widget);
        zaixianbox->setObjectName(QString::fromUtf8("zaixianbox"));

        verticalLayout->addWidget(zaixianbox);

        fasong4 = new QPushButton(widget);
        fasong4->setObjectName(QString::fromUtf8("fasong4"));

        verticalLayout->addWidget(fasong4);

        shuaxin = new QPushButton(widget);
        shuaxin->setObjectName(QString::fromUtf8("shuaxin"));

        verticalLayout->addWidget(shuaxin);

        shangxian = new QPushButton(widget);
        shangxian->setObjectName(QString::fromUtf8("shangxian"));

        verticalLayout->addWidget(shangxian);

        xiaxian = new QPushButton(widget);
        xiaxian->setObjectName(QString::fromUtf8("xiaxian"));

        verticalLayout->addWidget(xiaxian);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        xiaoxikuang = new QTextEdit(widget);
        xiaoxikuang->setObjectName(QString::fromUtf8("xiaoxikuang"));

        verticalLayout->addWidget(xiaoxikuang);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        xiaoxijilu = new QTextEdit(widget);
        xiaoxijilu->setObjectName(QString::fromUtf8("xiaoxijilu"));

        verticalLayout->addWidget(xiaoxijilu);

        fasong = new QPushButton(widget);
        fasong->setObjectName(QString::fromUtf8("fasong"));

        verticalLayout->addWidget(fasong);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        zaixian = new QLabel(widget_2);
        zaixian->setObjectName(QString::fromUtf8("zaixian"));

        horizontalLayout->addWidget(zaixian);


        verticalLayout->addWidget(widget_2);

        dqzx = new QListWidget(widget);
        dqzx->setObjectName(QString::fromUtf8("dqzx"));

        verticalLayout->addWidget(dqzx);


        verticalLayout_2->addWidget(widget);

        QtChatRoomClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtChatRoomClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtChatRoomClass->setStatusBar(statusBar);

        retranslateUi(QtChatRoomClass);

        QMetaObject::connectSlotsByName(QtChatRoomClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtChatRoomClass)
    {
        QtChatRoomClass->setWindowTitle(QCoreApplication::translate("QtChatRoomClass", "QtChatRoom", nullptr));
        label_3->setText(QCoreApplication::translate("QtChatRoomClass", "\345\275\223\345\211\215IP\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("QtChatRoomClass", "\345\275\223\345\211\215\347\253\257\345\217\243\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("QtChatRoomClass", "\345\256\242\346\210\267\347\253\257\345\217\243\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("QtChatRoomClass", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\232", nullptr));
        fasong4->setText(QCoreApplication::translate("QtChatRoomClass", "\345\217\221\351\200\201", nullptr));
        shuaxin->setText(QCoreApplication::translate("QtChatRoomClass", "\345\210\267\346\226\260", nullptr));
        shangxian->setText(QCoreApplication::translate("QtChatRoomClass", "\344\270\212\347\272\277", nullptr));
        xiaxian->setText(QCoreApplication::translate("QtChatRoomClass", "\344\270\213\347\272\277", nullptr));
        label->setText(QCoreApplication::translate("QtChatRoomClass", "\346\266\210\346\201\257\345\210\227\350\241\250\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QtChatRoomClass", "\346\266\210\346\201\257\357\274\232", nullptr));
        fasong->setText(QCoreApplication::translate("QtChatRoomClass", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label_6->setText(QCoreApplication::translate("QtChatRoomClass", "\345\275\223\345\211\215\345\234\250\347\272\277\357\274\232", nullptr));
        zaixian->setText(QCoreApplication::translate("QtChatRoomClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtChatRoomClass: public Ui_QtChatRoomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCHATROOM_H
