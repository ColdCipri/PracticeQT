#pragma once
#include <vector>
#include "Writer.h"

class WriterRepository
{
private:
	std::vector<Writer> arr;
public:
	WriterRepository();
	void add(Writer w);
	Writer get(int pos);
	int getCount();
	Writer getWriterByName(QString name);
	~WriterRepository();
};

