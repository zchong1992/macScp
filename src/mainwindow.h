#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "folder.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class macScp;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::macScp *ui;
    Folder leftFolder;
    Folder rightFolder;
};
#endif // MAINWINDOW_H
