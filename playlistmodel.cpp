#include "playlistmodel.h"

PlayListModel::PlayListModel(QObject *parent) : QAbstractTableModel(parent), table(0,1)
{
}

int PlayListModel::rowCount(const QModelIndex &parent) const {
   return table.getHeight();
}

int PlayListModel::columnCount(const QModelIndex &parent) const {
    return table.getWidth();
}

QVariant PlayListModel::data(const QModelIndex &index, int role) const {
    if(!(role == Qt::DisplayRole))
        return QVariant();

    return QVariant(table.ref(index.row(), index.column()));
}
