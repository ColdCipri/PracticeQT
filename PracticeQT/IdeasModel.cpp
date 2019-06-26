#include "IdeasModel.h"
#include <algorithm>

IdeasModel::IdeasModel(QObject *parent)
	: QAbstractTableModel(parent)
{
}

IdeasModel::IdeasModel(QList<Idea> ideas, QObject *parent)
	: QAbstractTableModel(parent)
	, ideas(ideas)
{
}

int IdeasModel::rowCount(const QModelIndex & parent) const
{
	Q_UNUSED(parent);
	return ideas.size();
}

int IdeasModel::columnCount(const QModelIndex & parent) const
{
	Q_UNUSED(parent);
	return 4;
}

QVariant IdeasModel::data(const QModelIndex & index, int role) const
{
	if (!index.isValid())
		return QVariant();

	if (index.row() >= ideas.size() || index.row() < 0)
		return QVariant();

	if (role == Qt::DisplayRole) {
		const auto &idea = ideas.at(index.row());

		if (index.column() == 0)
			return idea.description;
		else if (index.column() == 1)
			return idea.act;
		else if (index.column() == 2)
			return idea.status;
		else if (index.column() == 3)
			return idea.w.name;
	}
	return QVariant();

}

QVariant IdeasModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role != Qt::DisplayRole)
		return QVariant();

	if (orientation == Qt::Horizontal) {
		switch (section) {
		case 0:
			return tr("Description");
		case 1:
			return tr("Act");
		case 2:
			return tr("Status");
		case 3:
			return tr("Writer");
		default:
			return QVariant();
		}
	}
	return QVariant();
}

Qt::ItemFlags IdeasModel::flags(const QModelIndex & index) const
{
	if (!index.isValid())
		return Qt::ItemIsEnabled;
	return QAbstractTableModel::flags(index);
}

bool IdeasModel::setData(const QModelIndex & index, const QVariant & value, int role)
{
	if (index.isValid() && role == Qt::EditRole) {
		int row = index.row();

		auto idea = ideas.value(row);

		if (index.column() == 0)
			idea.description = value.toString();
		else if (index.column() == 1)
			idea.act = value.toInt();
		else if (index.column() == 2)
			idea.status = value.toString();
		else if (index.column() == 3)
			idea.w.name = value.toString();

		ideas.replace(row, idea);
		emit(dataChanged(index, index));

		return true;
	}

	return false;
}

void IdeasModel::appendData(Idea i)
{
	int newRow = ideas.count();
	beginInsertRows(QModelIndex(), newRow, newRow);
	ideas.append(i);

	std::sort(ideas.begin(), ideas.end(), IdeasModel::compare);
	endInsertRows();
}

bool IdeasModel::insertRows(int position, int rows, const QModelIndex & index)
{
	Q_UNUSED(index);
	beginInsertRows(QModelIndex(), position, position + rows - 1);

	for (int row = 0; row < rows; ++row)
		ideas.insert(position, { QString{}, QString{}, Writer{}, 0 });

	endInsertRows();
	return true;
}

bool IdeasModel::removeRows(int position, int rows, const QModelIndex & index)
{
	Q_UNUSED(index);
	beginRemoveRows(QModelIndex(), position, position + rows - 1);

	for (int row = 0; row < rows; ++row)
		ideas.removeAt(position);

	endRemoveRows();
	return true;
}

bool IdeasModel::sortFunction(const Idea & v1, const Idea & v2)
{
	if (v1.act < v2.act)
		return true;
	return false;
}

QList<Idea> IdeasModel::getIdeas() const
{
	return ideas;
}
