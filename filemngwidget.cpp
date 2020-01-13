
#include "filemngwidget.h"
#include "directorytreeview.h"
#include <QFileSystemModel>
#include <QHeaderView>

FileMngWidget::FileMngWidget() : QWidget() {
    setFixedSize(300, 200);

    fileModel = new QFileSystemModel(this);
    QString rootPath("E:\\music");
    fileModel->setRootPath(rootPath);
    fileModel->setNameFilters(
                QStringList({"*.flac","*.mp3","*.wav","*.mp4","*.m4a","*.wmv"}));
    fileModel->setNameFilterDisables(false);

    dirView = new DirectoryTreeView(this);
    dirView->setModel(fileModel);
    dirView->setRootIndex(fileModel->index(rootPath));

    QHeaderView *view = dirView->header();
    view->hideSection(1);
    view->hideSection(2);
    view->hideSection(3);

}


QString FileMngWidget::selectedFile() const {
    QModelIndex index = dirView->selectionModel()->currentIndex();

    return index.data().toString();
}

QList<QString> FileMngWidget::selectedFiles() const {
    QList<QString> ret;

    QModelIndexList indexList = dirView->selectionModel()->selectedIndexes();
    for(const auto& index : indexList) {
        ret << index.data().toString();
    }

    return ret;
}
