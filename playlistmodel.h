#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H

#include "ary2d.h"
#include <QAbstractTableModel>

class PlayList;

class PlayListModel : public QAbstractTableModel
{
    PlayList *playList;
public:
    PlayListModel(QObject *parent = nullptr);
    void setPlayList(PlayList *playList);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

};

#endif // PLAYLISTMODEL_H
