#include "player.h"
#include <QPushButton>
#include <QHBoxLayout>

Player::Player() : QWidget()
{
    //widget
    QPushButton *button = new QPushButton("button");

    //layout
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(button);
    this->setLayout(mainLayout);
}
