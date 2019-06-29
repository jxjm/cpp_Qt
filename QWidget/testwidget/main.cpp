#include "testwidget.h"
#include <QtWidgets/QApplication>
#include <Xthread.h>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testwidget w;
	w.show();
	w.setGeometry(1000, 1000, 1000, 1000);
	Xthread thread1;
	QObject::connect(&thread1, SIGNAL(movewindow(int, int)), &w, SLOT(move(int, int)));
	thread1.start();
	
	return a.exec();

}
