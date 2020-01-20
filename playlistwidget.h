#ifndef PLAYLISTVIEWER_H
#define PLAYLISTVIEWER_H

#include <QWidget>

class PlayList;
class QTableView;
class QPushButton;

class PlayListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PlayListWidget(QWidget *parent = nullptr);
private:
    PlayList* playList;

    QTableView *tree;
    QPushButton *addBtn;

public slots:
    PlayList* getPlayList();
    void addContent(QList<QString> fileList);

};

#endif // PLAYLISTVIEWER_H
