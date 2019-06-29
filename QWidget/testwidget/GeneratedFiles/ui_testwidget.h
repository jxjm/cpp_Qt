/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testwidgetClass
{
public:
    QLabel *label;

    void setupUi(QWidget *testwidgetClass)
    {
        if (testwidgetClass->objectName().isEmpty())
            testwidgetClass->setObjectName(QString::fromUtf8("testwidgetClass"));
        testwidgetClass->resize(600, 400);
        label = new QLabel(testwidgetClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 140, 191, 31));

        retranslateUi(testwidgetClass);

        QMetaObject::connectSlotsByName(testwidgetClass);
    } // setupUi

    void retranslateUi(QWidget *testwidgetClass)
    {
        testwidgetClass->setWindowTitle(QApplication::translate("testwidgetClass", "testwidget", nullptr));
        label->setText(QApplication::translate("testwidgetClass", "Hello World", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testwidgetClass: public Ui_testwidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
