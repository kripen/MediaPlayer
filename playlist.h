#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QVector>
#include <QString>

class PlayList
{
    QVector<QString> fileList;
public:
    PlayList();
    void addFile(QString path);
    QString currentFile();
};

#endif // PLAYLIST_H
