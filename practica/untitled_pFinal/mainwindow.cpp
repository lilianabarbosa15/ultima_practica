#include "mainwindow.h"


//Para pasar los double a String:
#include <QString>

#include <QDebug>

//extern grafica orbitas;

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
    if(inicio == false){
        inicio = true; //Inicia la simulación y no permite agregar más planetas

        //Inicia la ejecución de hilo que contiene la gráfica   <-----------------------------

        //orbitas.inicio(ui); //Se debe poner cuando ya aparezca el sol

        //orbitas.start();


    }
}

void MainWindow::on_nuevoCuerpo_clicked()
{
    if(inicio == false){

        double posicionInicialX_;
        posicionInicialX_ = ui->posicionInicialX->value();
        QString valueAsString = QString::number(posicionInicialX_);
        ui->datosPosicionX->setText(valueAsString);   //Agrega los numeros a una sección en la pantalla


        qDebug() << "NUEVO PLANETA" << posicionInicialX_;

        //planetas.append(new grafica());//Debe recibir ui, y todas las caracteristicas de los planetas



    }
}


















