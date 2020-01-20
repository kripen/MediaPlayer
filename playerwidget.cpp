#include "playerwidget.h"
#include "playlist.h"
#include <QPushButton>
#include <QMediaPlayer>
#include <QHBoxLayout>

PlayerWidget::PlayerWidget() : QWidget(), mediaPlayer(new QMediaPlayer(this)),
    playList(new PlayList())
{
    //widget
    QPushButton *playBtn = new QPushButton("play", this);

    connect(playBtn, SIGNAL(clicked()), this, SLOT(play()));
}

void PlayerWidget::play() {
   mediaPlayer->setMedia(QUrl::fromLocalFile(playList->currentFile()));
   mediaPlayer->setVolume(50);
   mediaPlayer->play();
}

void PlayerWidget::setPlayList(PlayList *playList) {
    this->playList = playList;
}
