#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "ui";
    qDebug() << "o";
    int* p;
    delete p;
    char* a;
    system(a);
}

MainWindow::~MainWindow()
{
    delete ui;
}
