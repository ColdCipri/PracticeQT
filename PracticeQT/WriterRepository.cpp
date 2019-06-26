#include "WriterRepository.h"



WriterRepository::WriterRepository()
{
}

void WriterRepository::add(Writer w)
{
	arr.push_back(w);
}

Writer WriterRepository::get(int pos)
{
	return arr[pos];
}

int WriterRepository::getCount()
{
	return arr.size();
}

Writer WriterRepository::getWriterByName(QString name)
{
	for (auto i : arr) {
		if (i.name == name)
			return i;
	}
	return Writer("None", "None");
}


WriterRepository::~WriterRepository()
{
}
