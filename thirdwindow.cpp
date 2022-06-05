#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <time.h>
using namespace std;

thirdWindow::thirdWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resourses/img/hodilka.jpeg");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

int main()
{


}

thirdWindow::~thirdWindow()
{
    delete ui;
}


void thirdWindow::on_pushButton_clicked()
{
//    int random = *1 + rand() % 6*;
    QMessageBox::about(this, "Ход", "Пошел нахуй");
}

