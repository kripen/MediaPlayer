#include "playlist.h"
#include <QDebug>

PlayList::PlayList() {

}

void PlayList::addFile(QString path) {
    fileList << path;
}

QString PlayList::file(int index) const {
    return fileList[index];
}

QString PlayList::currentFile() const {
    return fileList.front();
}

int PlayList::size() const {
    return fileList.size();
}
