#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QVector<Grafica*> cuerposEnPantalla;
#include <QDebug>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_simulacionNueva_clicked(){

    //Toma el valor de la masa del cuerpo central y lo modifica, oculta la ventana actual y muestra la otra:
    if(ui->masaSol_->value() > 1){
        cuerposEnPantalla.at(0)->getCuerpo()->setMasa(ui->masaSol_->value());
        this->close();
        wS.show();
    }
}
