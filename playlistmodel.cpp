#include "playlistmodel.h"
#include "playlist.h"
#include <QDebug>

PlayListModel::PlayListModel(QObject *parent) : QAbstractTableModel(parent)
{
}

void PlayListModel::setPlayList(PlayList *playList) {
    this->playList = playList;
}

int PlayListModel::rowCount(const QModelIndex &parent) const {
    return playList->size();
}

int PlayListModel::columnCount(const QModelIndex &parent) const {
    return 1;
}

QVariant PlayListModel::data(const QModelIndex &index, int role) const {
    if(!(role == Qt::DisplayRole))
        return QVariant();

    qDebug() << "called";
    return QVariant(playList->file(index.row()));

}
