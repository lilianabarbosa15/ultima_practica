#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "cuerpo.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    Cuerpo cuerpo(8,5);
    cout<<cuerpo.calcularTheta(2,2)<<"hola";
    QApplication a(argc, argv);
    QGraphicsScene scene;
    scene.addText("posicionX");
    QGraphicsView view(&scene);
    view.setMinimumSize(600,600);
    view.setMaximumSize(800,800);
    view.show();
    return a.exec();


}


