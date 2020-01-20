#include "playlistwidget.h"
#include "playlistmodel.h"
#include "playlist.h"
#include <QTableView>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>

PlayListWidget::PlayListWidget(QWidget *parent) : QWidget(parent),
    playList(new PlayList()), tree(new QTableView()), addBtn(new QPushButton("add"))
{
    tree->setModel(new PlayListModel());

    setFixedSize(300, 300);

    //widget
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(tree);
    layout->addWidget(addBtn);

    this->setLayout(layout);

}

PlayList *PlayListWidget::getPlayList() {
    return playList;
}

void PlayListWidget::addContent(QList<QString> fileList) {
    for(const auto &file : fileList) {
       playList->addFile(file);
    }

}
