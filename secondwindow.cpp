#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
    QString firstplayer = ui->firstplayer->text();
    QString secondlayer = ui->secondplayer->text();
    QString thirdlayer = ui->thirdplayer->text();
    hide(); // скрывает первое окно
    third = new thirdWindow(this);
    third->show();
}


