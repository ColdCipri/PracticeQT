#include "Controller.h"



Controller::Controller()
{
	repo = WriterRepository();
	readWriters();
}

void Controller::readWriters()
{
	ifstream r("writers.txt");
	string line;
	while (getline(r, line)) {
		QString l = QString::fromStdString(line);
		QStringList words = l.split(',');
		Writer r = Writer(words[0], words[1]);
		repo.add(r);
	}
}

IdeasModel * Controller::createAdapter()
{
	QList<Idea> li;
	ifstream r("ideas.txt");
	string line;
	while (getline(r, line)) {
		QString l = QString::fromStdString(line);
		QStringList words = l.split(',');
		Idea i = Idea(words[0], words[1], repo.getWriterByName(words[2]), words[3].toInt());
		li.append(i);
	}

	std::sort(li.begin(), li.end(), IdeasModel::compare);
	return new IdeasModel(li);
}

Writer Controller::getWriterAt(int pos)
{
	return repo.get(pos);
}

int Controller::getWriterCount()
{
	return repo.getCount();
}

Writer Controller::getWriterByName(QString name)
{
	return repo.getWriterByName(name);
}


Controller::~Controller()
{
}
