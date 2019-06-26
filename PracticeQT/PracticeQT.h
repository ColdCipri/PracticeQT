#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PracticeQT.h"
#include "Writer.h"
#include "IdeasModel.h"
#include "Controller.h"

class PracticeQT : public QMainWindow
{
	Q_OBJECT

public slots:
	void addIdea();
	void updateIdea();
	void acceptIdea();

public:
	IdeasModel* m;
	Controller* c;
	Writer w;
	PracticeQT(Writer w, IdeasModel * m, Controller * c, QWidget * parent = Q_NULLPTR);

private:
	Ui::PracticeQTClass ui;
};
