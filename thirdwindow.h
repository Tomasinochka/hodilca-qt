#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QDialog>

namespace Ui {
class thirdWindow;
}

class thirdWindow : public QDialog
{
    Q_OBJECT

public:
    explicit thirdWindow(QWidget *parent = nullptr);
    ~thirdWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::thirdWindow *ui;
};

#endif // THIRDWINDOW_H
