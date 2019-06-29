#pragma once

#include <QtWidgets/QWidget>
#include "ui_testwidget.h"

class testwidget : public QWidget
{
	Q_OBJECT

public:
	testwidget(QWidget *parent = Q_NULLPTR);

public slots:void move(int x, int y) {
	QWidget::move(x, y);
};

private:
	Ui::testwidgetClass ui;
};
