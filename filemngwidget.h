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
public slots:
    void addContent() const;

private:
    DirectoryTreeView *dirView;
    QFileSystemModel *fileModel;
    QStringList mediaFileFilter;

signals:
    void contentAdded(QList<QString> filePath) const ;

};

#endif // FILEBROWSER_H
