#ifndef PLAYLISTVIEWER_H
#define PLAYLISTVIEWER_H

#include <QWidget>

class QTableView;
class QPushButton;

class PlayListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PlayListWidget(QWidget *parent = nullptr);

private:
    QTableView *tree;
    QPushButton *addBtn;

signals:

public slots:


};

#endif // PLAYLISTVIEWER_H
