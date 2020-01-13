#ifndef FILEBROWSER_H
#define FILEBROWSER_H

#include <QWidget>
#include <QList>
class DirectoryTreeView;
class QFileSystemModel;

class FileMngWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FileMngWidget();
    QList<QString> selectedFiles() const;
    QString selectedFile() const;

private:
    DirectoryTreeView *dirView;
    QFileSystemModel *fileModel;

signals:

public slots:

};

#endif // FILEBROWSER_H
