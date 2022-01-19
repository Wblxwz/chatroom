#pragma once
#pragma execution_character_set("utf-8")
#include <QDialog>
#include "ui_QtOption.h"
#include "QtChatRoom.h"
#include <qicon.h>
#include <qstring.h>
extern QString a, b;
class QtOption : public QDialog
{
	Q_OBJECT

public:
	QtOption(QWidget* parent = Q_NULLPTR);
	~QtOption();
private:
	Ui::QtOption ui;
signals:
public slots:
	void bangz();
};
