#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#include <QList>
#include "Idea.h"

class IdeasModel : public QAbstractTableModel
{
	Q_OBJECT

public:
	IdeasModel(QObject *parent = 0);
	IdeasModel(QList<Idea> ideas, QObject *parent = 0);
	static bool compare(const Idea& i1, const Idea& i2) {
		return i1.act < i2.act;
	}
	int rowCount(const QModelIndex &parent) const override;
	int columnCount(const QModelIndex &parent) const override;
	QVariant data(const QModelIndex &index, int role) const override;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
	Qt::ItemFlags flags(const QModelIndex &index) const override;
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;
	void appendData(Idea i);
	bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex()) override;
	bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex()) override;
	bool sortFunction(const Idea &v1, const Idea &v2);
	QList<Idea> getIdeas() const;
private:
	QList<Idea> ideas;

};
#endif // !TABLEMODEL_H




