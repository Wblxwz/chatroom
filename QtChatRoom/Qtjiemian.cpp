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
	setWindowTitle("������");
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
	// ��ÿ�����������¼����;
	z->show();
	this->close();
	nc = ui.nicheng->text();

	if (a == "")
	{
		QMessageBox::critical(this, "����", "δ����IP��ַ����رճ�������´�!", "ȷ��");
		z->close();
	}
	else if (b == "")
	{
		QMessageBox::critical(this, "����", "δ���ö˿ڣ���رճ�������´�!", "ȷ��");
		z->close();
	}
}

void Qtjiemian::bangzhu()
{
	QMessageBox::information(this, "����", "�ȵ�������ٵ�¼,��ʱ�޷�ע�ᣬֱ�ӵ�¼����", "ȷ��");
}
//ʵ����˸���ܣ�
void Qtjiemian::shezhi()
{
	QtOption* p = new QtOption(0);
	p->exec();
}

Qtjiemian::~Qtjiemian()
{
}
