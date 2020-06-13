#ifndef GRAFICA_H
#define GRAFICA_H


#include "mainwindow.h"
#include "cuerpo.h"

class grafica: public QGraphicsItem
{
    public:

        grafica();
        //~grafica();

        QGraphicsView *view;
        Cuerpo * planeta;
        QGraphicsScene * escena;
        unsigned int tamanio = 1000;


/*
        QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pintara el objeto
        void setEscala(float s);
        void actualizar(float dt);
        Cuerpo* getEsf();
*/


};

#endif // GRAFICA_H
