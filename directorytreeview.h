#ifndef DIRECTORYTREEVIEW_H
#define DIRECTORYTREEVIEW_H

#include <QTreeView>

class DirectoryTreeView : public QTreeView
{
    Q_OBJECT
public:
    DirectoryTreeView(QWidget *parent = nullptr);

    QString selectedItemName();
};

#endif // DIRECTORYTREEVIEW_H
