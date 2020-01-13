#include "mainwindow.h"
#include "filemngwidget.h"
#include "playlistwidget.h"
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
    mainLayout->addWidget(new PlayListWidget());
    this->setLayout(mainLayout);

}
