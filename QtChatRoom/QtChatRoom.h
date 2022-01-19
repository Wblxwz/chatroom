#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QMainWindow>
#include <qtcpsocket.h>
#include "ui_QtChatRoom.h"
#include "QtOption.h"
#include <qtcpsocket.h>
#include <qtimer.h>
extern int panduan;
class QtChatRoom : public QMainWindow
{
	Q_OBJECT

public:
	QtChatRoom(QWidget* parent = Q_NULLPTR);
	void timerEvent(QTimerEvent*);
private:
	Ui::QtChatRoomClass ui;
	QTcpSocket* tjz;
	void ready();
	void duankai();
	void lianjie();
	void shangxian();
	void xiaxian();
	void fasong();
signals:
private slots:
	void sl();
	void gengxin();
};
