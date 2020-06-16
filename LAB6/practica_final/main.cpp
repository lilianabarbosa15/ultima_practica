#include "mainwindow.h"
#include "simulacion.h"

#include <QApplication>

QGraphicsScene * escena;
unsigned int tamanio = 1000;
unsigned int tamanioSol = 40;
unsigned int tamanioPlaneta = 10;
QVector<Grafica*> cuerposEnPantalla = {};   //Para crear varios planetas

unsigned int posicion; //posicion del dato en el QVector

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
