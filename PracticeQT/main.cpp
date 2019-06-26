#include "PracticeQT.h"
#include <QtWidgets/QApplication>
#include <vector>
#include "Controller.h"
#include "IdeasModel.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Controller* c = new Controller();
	IdeasModel* m = c->createAdapter();
	std::vector<PracticeQT*> windows;
	for (int i = 0; i < c->getWriterCount(); i++) {
		windows.push_back(new PracticeQT(c->getWriterAt(i), m, c));
		windows.at(i)->show();
	}

	return a.exec();
}
