#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "rgbcontroller.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:


    void on_r_slider_valueChanged(int value);

    void on_g_slider_valueChanged(int value);

    void on_b_slider_valueChanged(int value);

private:
    RGBController* controller;
    QPalette *pallete_r;
    QPalette *pallete_g;
    QPalette *pallete_b;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
