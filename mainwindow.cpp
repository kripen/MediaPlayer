#include "mainwindow.h"
#include "filemngwidget.h"
#include "playlistwidget.h"
#include "playerwidget.h"
#include <QDir>
#include <QTreeView>
#include <QHeaderView>
#include <QFileSystemModel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMediaPlayer>
#include <QDebug>

MainWindow::MainWindow() : fileMng(new FileMngWidget())
{

    //window settings

    //layout
    QHBoxLayout* mainLayout = new QHBoxLayout();
    mainLayout->addWidget(fileMng);
    PlayListWidget* playListWidget = new PlayListWidget();
    mainLayout->addWidget(playListWidget);
    PlayerWidget *player = new PlayerWidget();
    player->setPlayList(playListWidget->getPlayList());
    mainLayout->addWidget(player);
    this->setLayout(mainLayout);

    connect(fileMng, SIGNAL(contentAdded(QList<QString>)),
        playListWidget, SLOT(addContent(QList<QString>)));

}
