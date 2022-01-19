#pragma once
#pragma execution_character_set("utf-8")
#include <QMainWindow>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qlist.h>
#include "ui_QtServer.h"
extern int cnt;
extern QList<QString> ss;
extern QList<QTcpSocket*> cs;
class QtServer : public QMainWindow
{
	Q_OBJECT

public:
	QtServer(QWidget *parent = Q_NULLPTR);
	~QtServer();
private:
	Ui::QtServer ui;
	QTcpServer* ser;
	QTcpSocket* soc;
	QList<QTcpSocket*> list;
signals:
public slots:
	void qidong();
	void jianting();
	void siliao();
};
