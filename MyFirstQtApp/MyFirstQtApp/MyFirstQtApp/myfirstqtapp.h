#ifndef MYFIRSTQTAPP_H
#define MYFIRSTQTAPP_H

#include <QtWidgets/QMainWindow>
#include "ui_myfirstqtapp.h"

class MyFirstQtApp : public QMainWindow
{
	Q_OBJECT

public:
	MyFirstQtApp(QWidget *parent = 0);
	~MyFirstQtApp();

private:
	Ui::MyFirstQtAppClass ui;
};

#endif // MYFIRSTQTAPP_H
