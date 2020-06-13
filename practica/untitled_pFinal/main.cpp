#include "mainwindow.h"
#include "grafica.h"

#include <QApplication>

QGraphicsScene * escena;
unsigned int tamanio = 1000;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
