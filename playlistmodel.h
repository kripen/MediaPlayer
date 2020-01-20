#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H

#include "ary2d.h"
#include <QAbstractTableModel>

class PlayListModel : public QAbstractTableModel
{
    kpn::Ary2d<QString> table;
public:
    PlayListModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
};

#endif // PLAYLISTMODEL_H
