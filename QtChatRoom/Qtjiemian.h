#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include <qstring.h>
#include "ui_Qtjiemian.h"
#include "QtServer.h"
#include "QtChatRoom.h"
#include <vector>
extern QString nc;
class Qtjiemian : public QWidget
{
	Q_OBJECT

public:
	Qtjiemian(QWidget* parent = Q_NULLPTR);
	~Qtjiemian();
private:
	Ui::Qtjiemian ui;

signals:
public slots:
	void tiaozhuan();
	void bangzhu();
	void shezhi();
};
