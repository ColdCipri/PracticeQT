#pragma once
#include <QString>
#include "Writer.h"

class Idea
{
public:
	QString description;
	QString status;
	Writer w;
	int act;
public:
	Idea();
	Idea(QString desc, QString status, Writer w, int act);
	bool operator<(const Idea& i);
	bool operator>(const Idea& i);
	~Idea();
};

