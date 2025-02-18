#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->count, &QPushButton::clicked, this,&MainWindow::countClick);
    connect(ui->reset, &QPushButton::clicked, this,&MainWindow::resetClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countClick()
{
    clicks ++;
    QString str = QString::number(clicks);
    ui->laatikko->setText(str);
    qDebug()<<"nappia painettu "<<clicks<<" kertaa";
}

void MainWindow::resetClick()
{
    clicks = 0;
    ui->laatikko->clear();
    qDebug()<<"reset";
}
