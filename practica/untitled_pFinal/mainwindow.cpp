#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cuerpo.h"

//Para pasar los double a String:
#include <QString>

#include <QDebug>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    inicio = true; //Inicia la simulación y no permite agregar más planetas
}

void MainWindow::on_nuevoCuerpo_clicked()
{
    if(inicio == false){

        double posicionInicialX_;
        posicionInicialX_ = ui->posicionInicialX->value();
        QString valueAsString = QString::number(posicionInicialX_);
        ui->datosPosicionX->setText(valueAsString);   //Agrega los numeros a una sección en la pantalla



        qDebug() << "NUEVO PLANETA" << posicionInicialX_;
    }
}

