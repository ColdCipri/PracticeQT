#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <QString>
#include <QStringList>
#include "WriterRepository.h"
#include "Idea.h"
#include "IdeasModel.h"

using namespace std;

class Controller
{
public:
	WriterRepository repo;
public:
	Controller();
	void readWriters();
	IdeasModel* createAdapter();
	Writer getWriterAt(int pos);
	int getWriterCount();
	Writer getWriterByName(QString name);
	~Controller();
};

