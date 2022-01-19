#include "QtServer.h"
#include "QtChatRoom.h"
#include <qmessagebox.h>
#include <qdebug.h>
#include "Qtjiemian.h" 
#include <qdatetime.h>
#include <qsettings.h>
int cnt = 0;
QList<QString> ss;
QList<QTcpSocket*> cs;
QtServer::QtServer(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle("服务器");
	setWindowIcon(QIcon("./Image/ServerIcon.jpg"));
	setFixedSize(346, 616);
	//Debug
	ui.port->setText("9999");
	ui.iplineEdit->setText("127.0.0.1");
	ui.fs2->setEnabled(false);
	connect(ui.bz2, &QPushButton::clicked, this, [=]() {
		QMessageBox::information(this, "帮助", "建议设置端口：9999", "确定");
		});
	ser = new QTcpServer(this);
	connect(ser, &QTcpServer::newConnection, this, &QtServer::qidong);
	connect(ui.StartServer, &QPushButton::clicked, this, &QtServer::jianting);
	connect(ui.fs3, &QPushButton::clicked, this, &QtServer::siliao);
	connect(ui.fs2, &QPushButton::clicked, this, [=]() {
		QDateTime time = QDateTime::currentDateTime();
		QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
		QByteArray shijian = sj.toLatin1();
		QString msg = ui.fasongkuang->toPlainText();
		for (int i = 0; i < list.length(); ++i)
		{
			list[i]->write(msg.toUtf8());
		}
		ui.xiaoxijilu->append(msg);
		ui.fasongkuang->clear();
		});
}
//下线时能否去掉用户名： ?
//所有客户端发送消息时昵称一样 ?
void QtServer::qidong()
{
	soc = ser->nextPendingConnection();
	quint16 po = soc->peerPort();
	QString xinxi = QString("[%1]").arg(po);
	QByteArray lsxx = xinxi.toLatin1();
	list.append(soc);
	cs.append(soc);
	ui.comboBox->addItem(xinxi);
	connect(soc, &QTcpSocket::readyRead, this, [=]() {
		soc = (QTcpSocket*)this->sender();
	QByteArray data = soc->readAll();
		ui.xiaoxijilu->append(data);
		if (ui.comboBox->count() != 0)
		{
			for (int i = 0; i < list.length(); i++)
			{
				QDateTime time = QDateTime::currentDateTime(); 
				QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
				QByteArray shijian = sj.toLatin1();
				list[i]->write(data);
				//list[i]->write("   ");
				//list[i]->write(shijian);

			}
		}
		//char* ch;
		//QByteArray t = nc.toLatin1();
		//ch = t.data();
		//soc->write(ch);
		//soc->write(":");
		//soc->write(data);
		});
	connect(soc, &QTcpSocket::disconnected, this, [=]()
		{
			//每个客户端?
			//ui.fs2->setEnabled(false);
			//删除list
			//soc->write(lsxx);
			soc = (QTcpSocket*)this->sender();
			if (panduan == 1)
			{
				cnt = ui.zaixian->text().toInt();
				--cnt;
				ui.zaixian->setText(QString::number(cnt));
				panduan = 0;
			}
			for (int i = 0; i < list.length(); ++i)
			{
				if (list.at(i)->peerAddress() == soc->peerAddress())
				{
					if (list.at(i)->peerPort() == soc->peerPort())
					{
						if (ui.comboBox->itemText(i) == xinxi)
							ui.comboBox->removeItem(i);
						if (ui.comboBox->count() == 0)
							ui.comboBox->setCurrentText("客户端");
						list.removeAt(i);
						break;
					}
				}
			}
			ui.list->deleteLater();
			soc->close();
			soc->deleteLater();
		});
	ui.list->addItem(xinxi);
	ss.append(xinxi);
	//soc->write(lsxx);
	ui.fs2->setEnabled(true);
	cnt = ui.zaixian->text().toInt();
	++cnt;
	ui.zaixian->setText(QString::number(cnt));
	
}
void QtServer::jianting()
{
	unsigned short dk = ui.port->text().toShort();
	QHostAddress ads(ui.iplineEdit->text());
	ser->listen(ads, dk);
	ui.StartServer->setDisabled(true);
}
void QtServer::siliao()
{
	QString temp, temp1;
	if (ui.comboBox->count() != 0)
	{
		for (int i = 0; i < list.length(); i++)
		{
			temp1 = ui.comboBox->currentText();
			temp = ui.comboBox->itemText(i);
			if (temp == temp1)
			{
				QDateTime time = QDateTime::currentDateTime();
				QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
				QByteArray shijian = sj.toLatin1();
				QString msg = ui.fasongkuang->toPlainText();
					list[i]->write(msg.toUtf8());
					list[i]->write("   ");
					list[i]->write(shijian);
			}
		}
	}
	else
	{
		ui.xiaoxijilu->append("当前无连接");
		return;
	}
}
QtServer::~QtServer()
{
}
