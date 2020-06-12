#ifndef SIMULACION_H
#define SIMULACION_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "cuerpo.h"
#include <iostream>
#include <string>

class Simulacion: public QGraphicsView
{
    public:
        Simulacion(QWidget * parent=0);

        QGraphicsView *view;
        Cuerpo * planeta;
        QGraphicsScene * escena;

        unsigned int tamanio = 1000;

        //QVector<QGraphicsItem *> planetasOrbitando = {};

};

#endif // SIMULACION_H
