#include "playlistwidget.h"
#include "playlistmodel.h"
#include "playlist.h"
#include <QTableView>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>

PlayListWidget::PlayListWidget(QWidget *parent) : QWidget(parent),
    playList(new PlayList()), tree(new QTableView())
{
    //model
    PlayListModel *model = new PlayListModel();
    model->setPlayList(playList);
    tree->setModel(model);

    //geometry
    setFixedSize(300, 300);

    //layout
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(tree);

    this->setLayout(layout);

}

PlayList *PlayListWidget::getPlayList() {
    return playList;
}

void PlayListWidget::addContent(QList<QString> fileList) {
    for(const auto &file : fileList) {
       //playList->addFile(file); TODO:modelに通知する
    }

}
