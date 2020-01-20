#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class FileMngWidget;
class PlayerWidget;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
private:
    FileMngWidget* fileMng;
    PlayerWidget* player;

private slots:
};

#endif // MAINWINDOW_H
