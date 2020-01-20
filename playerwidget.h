#ifndef PLAYERWIDGET_H
#define PLAYERWIDGET_H

#include <QWidget>

class QMediaPlayer;
class PlayList;
class PlayerWidget : public QWidget
{
    Q_OBJECT

    QMediaPlayer *mediaPlayer;
    PlayList *playList;
public:
    PlayerWidget();
    void setPlayList(PlayList*);

signals:

private slots:
    void play();
};

#endif // PLAYER_H
