#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class FileMngWidget;
class Player;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
private:
    FileMngWidget* fileMng;
    Player* player;

private slots:
};

#endif // MAINWINDOW_H
