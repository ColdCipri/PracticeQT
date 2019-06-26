#include "PracticeQT.h"
#include <QMessageBox>
#include <QModelIndex>


PracticeQT::PracticeQT(Writer w, IdeasModel * m, Controller * c, QWidget * parent)
{
	this->m = m;
	this->c = c;
	this->w = w;

	ui.setupUi(this);
	this->setWindowTitle(w.name);
	ui.tableView->setModel(m); 
	if (w.expertise != "Senior")
		ui.accept->setVisible(false);

	connect(ui.add, SIGNAL(pressed()), this, SLOT(addIdea()));
	connect(ui.accept, SIGNAL(pressed()), this, SLOT(acceptIdea()));
	connect(ui.update, SIGNAL(pressed()), this, SLOT(updateIdea()));
}

void PracticeQT::addIdea() 
{
	try {
		QString description = ui.description->toPlainText();
		if (description.trimmed().size() == 0)
			throw std::exception{ "Description is empty" };
		int act = ui.act->toPlainText().toInt();

		if (act < 1 || act > 3)
			throw std::exception{ "Act can be only 1, 2 or 3" };
		for (auto i : m->getIdeas()) {
			if (i.description == description && i.act == act)
				throw std::exception{ "No duplicates allowed" };
		}
		this->m->appendData(Idea(description, "Proposed", this->w, act));
	}
	catch (std::exception e) {
		QMessageBox::information(this, "Error", e.what());

	}
}

void PracticeQT::updateIdea()
{
	QMessageBox::information(this, "test", "test");
	QModelIndexList ind = ui.tableView->selectionModel()->selectedRows();
}

void PracticeQT::acceptIdea()
{
	QModelIndexList ind = ui.tableView->selectionModel()->selectedRows();
}
