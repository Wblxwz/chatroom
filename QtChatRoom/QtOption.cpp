#include "QtOption.h"
#include <qmessagebox.h>
QString a, b;
QtOption::QtOption(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowTitle("����");
	setWindowIcon(QIcon("./Image/qqicon.jpg"));
	setFixedSize(499, 171);
	//Debug
	ui.IP->setText("127.0.0.1");
	ui.DuanKou->setText("9999");
	connect(ui.bz, &QPushButton::clicked, this, &QtOption::bangz);
	connect(ui.qd, &QPushButton::clicked, this, [=]() {
		a = ui.IP->text();
		b = ui.DuanKou->text();
		//ȷ���󱣴����ݣ�

		});
}
void QtOption::bangz()
{
	QMessageBox::information(this, "����", "����IP��127.0.0.1  ����˿ڣ�9999", "ȷ��");
}


QtOption::~QtOption()
{
}
