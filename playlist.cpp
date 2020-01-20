#include "playlist.h"
#include <QDebug>

PlayList::PlayList() {

}

void PlayList::addFile(QString path) {
    fileList << path;
    qDebug() << QString("PlayList::addFile() : added %1").arg(path);
}

QString PlayList::currentFile() {
    return fileList.front();
}
