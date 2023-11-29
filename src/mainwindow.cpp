#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::macScp)
{
    ui->setupUi(this);
    ui->leftWidget->addItems(leftFolder.GetFolder());
    ui->rightWidget->addItems(rightFolder.GetFolder());
}

MainWindow::~MainWindow()
{
    delete ui;
}
