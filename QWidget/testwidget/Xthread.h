#pragma once
#include <QThread>
class Xthread :public QThread
{

		Q_OBJECT
	public:
		QWidget *w = NULL;
		void run()
		{
			for (int x = 0; x < 1000; x++)
			{
				msleep(40);
				movewindow(x, x);
			}

		};

		Xthread();
		~Xthread();
	signals:
		void movewindow(int x, int y);

};