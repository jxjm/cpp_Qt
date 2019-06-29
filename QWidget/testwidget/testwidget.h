#pragma once

#include <QtWidgets/QWidget>
#include "ui_testwidget.h"

class testwidget : public QWidget
{
	Q_OBJECT

public:
	testwidget(QWidget *parent = Q_NULLPTR);

private:
	Ui::testwidgetClass ui;
};
