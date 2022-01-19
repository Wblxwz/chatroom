#include "QtChatRoom.h"
#include "Qtjiemian.h"
#include "QtOption.h"
#include "QtServer.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	Qtjiemian w;
	Qtjiemian d;
	QtServer s;
	w.show();
	d.show();
	s.show();
	return a.exec();
}
