#include "testwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testwidget w;
	w.show();
	return a.exec();
}
