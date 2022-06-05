#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide(); // скрывает первое окно
    second = new SecondWindow(this);
    second->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Правила", "Каждый игрок по очереди делает ход. Красный кружок - отдоляет игрока на 3 позиции. Зеленый кружок - приближает игрока на 3 позиции");
}

