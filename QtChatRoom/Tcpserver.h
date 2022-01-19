#pragma once

#include <QTcpServer>

#include <QWidget>
#include "server.h"
namespace Ui {
	class TcpServer;

}

class TcpServer : public QWidget
{
	Q_OBJECT

public:
	explicit TcpServer(QWidget* parent = 0);
	~TcpServer();

private:
	Ui::TcpServer* ui;
	int port;
	Server* server;

protected slots:
	void slotupdateserver(QString, int);//���յ�server���������źž͸��½������Ϣ


private slots:
	void on_pushButtonCreateChattingRoom_clicked();
};