#include "playlistwidget.h"
#include "playlistmodel.h"
#include <QTableView>
#include <QPushButton>
#include <QVBoxLayout>

PlayListWidget::PlayListWidget(QWidget *parent) : QWidget(parent),
    tree(new QTableView()), addBtn(new QPushButton("add"))
{
    tree->setModel(new PlayListModel());

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(tree);
    layout->addWidget(addBtn);

    this->setLayout(layout);

}
