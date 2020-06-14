#include "mainwindow.h"
#include "bienvenida.h"

#include "n.h"

#include <QApplication>

#include <QMessageBox>

QGraphicsScene * escena;
unsigned int tamanio = 1000;
unsigned int tamanioSol = 40;
unsigned int tamanioPlaneta = 10;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.hide();

    Bienvenida y;
    y.show();

    //w.show();

    return a.exec();
}
