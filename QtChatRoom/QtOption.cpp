#include "QtOption.h"
#include <qmessagebox.h>
QString a, b;
QtOption::QtOption(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowTitle("设置");
	setWindowIcon(QIcon("./Image/qqicon.jpg"));
	setFixedSize(499, 171);
	//Debug
	ui.IP->setText("127.0.0.1");
	ui.DuanKou->setText("9999");
	connect(ui.bz, &QPushButton::clicked, this, &QtOption::bangz);
	connect(ui.qd, &QPushButton::clicked, this, [=]() {
		a = ui.IP->text();
		b = ui.DuanKou->text();
		//确定后保存内容？

		});
}
void QtOption::bangz()
{
	QMessageBox::information(this, "帮助", "建议IP：127.0.0.1  建议端口：9999", "确定");
}


QtOption::~QtOption()
{
}
