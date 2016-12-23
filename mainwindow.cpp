#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pallete_r = new QPalette();
    pallete_g = new QPalette();
    pallete_b = new QPalette();

    pallete_r->setColor(QPalette::Text,Qt::red);
    ui->r_str->setPalette(*pallete_r);
    ui->r_str->setText(QString::number(ui->r_slider->value()));
    pallete_g->setColor(QPalette::Text,Qt::green);
    ui->g_str->setPalette(*pallete_g);
    ui->g_str->setText(QString::number(ui->g_slider->value()));
    pallete_b->setColor(QPalette::Text,Qt::blue);
    ui->b_str->setPalette(*pallete_b);
    ui->b_str->setText(QString::number(ui->b_slider->value()));



    controller  = new RGBController("COM13");







}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_r_slider_valueChanged(int value)
{


    ui->r_str->setText(QString::number(ui->r_slider->value()));
    controller->setRGB(ui->r_slider->value(),ui->g_slider->value(),ui->b_slider->value());

}

void MainWindow::on_g_slider_valueChanged(int value)
{

    ui->g_str->setText(QString::number(ui->g_slider->value()));
    controller->setRGB(ui->r_slider->value(),ui->g_slider->value(),ui->b_slider->value());
}



void MainWindow::on_b_slider_valueChanged(int value)
{

    ui->b_str->setText(QString::number(ui->b_slider->value()));
    controller->setRGB(ui->r_slider->value(),ui->g_slider->value(),ui->b_slider->value());
}
