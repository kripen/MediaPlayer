#include "filemngwidget.h"
#include "directorytreeview.h"
#include <QFileSystemModel>
#include <QHeaderView>
#include <QPushButton>
#include <QDir>
#include <QVBoxLayout>

FileMngWidget::FileMngWidget() : QWidget() ,
    mediaFileFilter({"*.flac","*.mp3","*.wav","*.mp4","*.m4a","*.wmv"})
{
    setFixedSize(300, 200);

    //model
    fileModel = new QFileSystemModel(this);
    QString rootPath("E:\\music");
    fileModel->setRootPath(rootPath);
    fileModel->setNameFilters(mediaFileFilter);
    fileModel->setNameFilterDisables(false);

    //view
    dirView = new DirectoryTreeView();
    dirView->setModel(fileModel);
    dirView->setRootIndex(fileModel->index(rootPath));
    dirView->setSelectionMode(QAbstractItemView::SingleSelection);

    QHeaderView *view = dirView->header();
    view->hideSection(1);
    view->hideSection(2);
    view->hideSection(3);


    //button
    QPushButton *addBtn = new QPushButton("add");

    //layout
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(dirView);
    layout->addWidget(addBtn);


    //connect
    connect(addBtn, SIGNAL(clicked()), this, SLOT(addContent()));

    this->setLayout(layout);

}

QList<QString> FileMngWidget::selectedFiles() const {
    QList<QString> ret;

    QModelIndex index = dirView->selectionModel()->currentIndex();

    if(fileModel->hasChildren(index)) {
        for(int r = 0; r < fileModel->rowCount(index); r++) {
            ret << fileModel->filePath(fileModel->index(r, 0, index));
        }
    } else {
        ret << fileModel->filePath(index);
    }

    return ret;
}

void FileMngWidget::addContent() const {
   emit this->contentAdded(this->selectedFiles());
}
