#include "Qtjiemian.h"
#include "QtChatRoom.h"
#include "QtOption.h"
#include <qpushbutton.h>
#include <qmessagebox.h>
#include <qdialog.h>
#include <qfile.h>
QString nc;
Qtjiemian::Qtjiemian(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setFixedSize(400, 300);
	setWindowTitle("聊天室");
	setWindowIcon(QIcon("././Image/qqicon.jpg"));
	ui.denglu->setFocus();
	ui.denglu->setDefault(1);
	//Debug
	//ui.nicheng->setText("Debug");
	connect(ui.denglu, &QPushButton::clicked, this, &Qtjiemian::tiaozhuan);
	connect(ui.bangzhu, &QPushButton::clicked, this, &Qtjiemian::bangzhu);
	connect(ui.shezhi, &QPushButton::clicked, this, &Qtjiemian::shezhi);
}

void Qtjiemian::tiaozhuan()
{
	QtChatRoom* z = new QtChatRoom(0);
	// 最好可以跳回来登录界面;
	z->show();
	this->close();
	nc = ui.nicheng->text();

	if (a == "")
	{
		QMessageBox::critical(this, "错误", "未设置IP地址，请关闭程序后重新打开!", "确定");
		z->close();
	}
	else if (b == "")
	{
		QMessageBox::critical(this, "错误", "未设置端口，请关闭程序后重新打开!", "确定");
		z->close();
	}
}

void Qtjiemian::bangzhu()
{
	QMessageBox::information(this, "帮助", "先点击设置再登录,暂时无法注册，直接登录即可", "确定");
}
//实现闪烁功能？
void Qtjiemian::shezhi()
{
	QtOption* p = new QtOption(0);
	p->exec();
}

Qtjiemian::~Qtjiemian()
{
}
