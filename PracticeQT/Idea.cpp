#include "Idea.h"



Idea::Idea()
{
}

Idea::Idea(QString desc, QString status, Writer w, int act)
{
	this->description = desc;
	this->status = status;
	this->w = w;
	this->act = act;
}

bool Idea::operator<(const Idea & i)
{
	return this->act < i.act;
}

bool Idea::operator>(const Idea & i)
{
	return this->act > i.act;
}


Idea::~Idea()
{
}
