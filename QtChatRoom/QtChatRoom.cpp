#include "QtChatRoom.h"
#include <qhostaddress.h>
#include "Qtjiemian.h"
#include "QtServer.h"
#include <qlist.h>
#include <qnetworkinterface.h>
#include <qstringlist.h>
#include <qdatetime.h>
#include <qsettings.h>
int panduan = 0;
QtChatRoom::QtChatRoom(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	startTimer(100);
	setWindowTitle("聊天室");
	setWindowIcon(QIcon("./Image/qqicon.jpg"));
	setFixedSize(356, 813);
	ui.kehuduan->setEnabled(false);
	ui.ltip->setText(a);
	ui.ltdk->setText(b);
	ui.ltip->setEnabled(false);
	ui.ltdk->setEnabled(false);
	tjz = new QTcpSocket;
	ui.fasong->setEnabled(false);
	Qtjiemian* jiemian = new Qtjiemian;
	connect(tjz, &QTcpSocket::readyRead, this, &QtChatRoom::ready);
	connect(tjz, &QTcpSocket::disconnected, this, &QtChatRoom::duankai);
	connect(tjz, &QTcpSocket::connected, this, &QtChatRoom::lianjie);
	connect(ui.shangxian, &QPushButton::clicked, this, &QtChatRoom::shangxian);
	connect(ui.xiaxian, &QPushButton::clicked, this, &QtChatRoom::xiaxian);
	connect(ui.fasong, &QPushButton::clicked, this, &QtChatRoom::fasong);
	connect(ui.fasong4, &QPushButton::clicked, this, &QtChatRoom::sl);
	connect(ui.shuaxin, &QPushButton::clicked, this, &QtChatRoom::gengxin);
}

void QtChatRoom::ready()
{
	QByteArray data = tjz->readAll();
	ui.xiaoxikuang->append(data);
}
void QtChatRoom::duankai()//断开后就不能再连了
{
	QString q = QString("%1").arg(tjz->localPort());
	ui.xiaoxikuang->append(q + "已下线");
	ui.fasong->setEnabled(false);
	tjz->close();
	tjz->deleteLater(); //delete tjz
	ui.shangxian->setDisabled(false);
	ui.xiaxian->setEnabled(false);
}
void  QtChatRoom::lianjie()
{
	QDateTime time = QDateTime::currentDateTime();
	QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
	QString q = QString("%1").arg(tjz->localPort());
	QByteArray arr = q.toLatin1();
	QByteArray shijian = sj.toLatin1();
	//ui.dqzx->addItem(q);
	//ui.xiaoxikuang->append(q + "已上线"+ "   " + sj);
	ui.kehuduan->setText(q);
	tjz->write(arr);
	tjz->write("已上线");
	tjz->write("   ");
	tjz->write(shijian);
	ui.shangxian->setDisabled(true);
	ui.fasong->setEnabled(true);
}
void  QtChatRoom::shangxian()
{
	QString ip = ui.ltip->text();
	unsigned short port = ui.ltdk->text().toUShort();
	tjz->connectToHost(QHostAddress(ip), port);
}
void  QtChatRoom::xiaxian()
{
	QDateTime time = QDateTime::currentDateTime();
	QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
	QByteArray shijian = sj.toLatin1();
	QString q = QString("%1").arg(tjz->localPort());
	QByteArray arr = q.toLatin1();
	tjz->write(arr);
	tjz->write("已下线");
	tjz->write("   ");
	tjz->write(shijian);
	panduan = 1;
	tjz->close();
	ui.shangxian->setEnabled(false);
	ui.xiaxian->setEnabled(false);
}
void  QtChatRoom::fasong()
{
	QDateTime time = QDateTime::currentDateTime();
	QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
	QByteArray shijian = sj.toLatin1();
	QString msg = ui.xiaoxijilu->toPlainText();
	if (msg == "")
		return;
	QString q = QString("%1").arg(tjz->localPort());
	QByteArray arr = q.toLatin1();
	tjz->write(arr);
	tjz->write(":");
	tjz->write(msg.toUtf8());
	tjz->write("   ");
	tjz->write(shijian);
	//ui.xiaoxikuang->append(q + ":" + msg + "   " + sj);
	ui.xiaoxijilu->clear();
}
void QtChatRoom::sl()
{
	QString temp, temp1;
	QString msg = ui.xiaoxijilu->toPlainText();
	QDateTime time = QDateTime::currentDateTime();
	QString sj = time.toString("yyyy-MM-dd hh:mm:ss");
	QByteArray shijian = sj.toLatin1();
	if (ui.zaixianbox->count() != 0)
	{
		for (int i = 0; i < cs.length(); i++)
		{
			temp1 = ui.zaixianbox->currentText();
			temp = ui.zaixianbox->itemText(i);
			if (temp == temp1)
			{
				for (int j = 0; j < cs.length(); ++j)
				{
					if (i != j)
					{
						quint16 po = cs[j]->peerPort();
						QString xinxi = QString("[%1]").arg(po);
						QByteArray lsxx = xinxi.toLatin1();
						cs[i]->write(lsxx);
					}
				}
				cs[i]->write(msg.toUtf8());
				cs[i]->write("   ");
				cs[i]->write(shijian);
			}
		}
	}
	else
	{
		ui.xiaoxijilu->append("当前无连接");
		return;
	}
}
void QtChatRoom::gengxin()
{
	ui.dqzx->clear();
	ui.zaixianbox->clear();
	for (int i = 0; i < ss.length(); ++i)//伪在线
	{
		ui.dqzx->addItem(ss.at(i));
		ui.zaixianbox->addItem(ss.at(i));
	}
}
void QtChatRoom::timerEvent(QTimerEvent*)
{
	ui.zaixian->setText(QString::number(cnt));
}
