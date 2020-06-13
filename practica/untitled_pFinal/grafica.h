#ifndef GRAFICA_H
#define GRAFICA_H


//#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"

//#include "mainwindow.h"


class Grafica: public QGraphicsItem
{
    public:

        Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, int radio_, double velocidadx_, double velocidady_);
        //~Grafica();

        //QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
        //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pintara el objeto
        //void setEscala(float s);
        //void actualizar(float dt);

        QGraphicsView *view;
        Cuerpo * getCuerpo();
        QGraphicsScene * escena;
        unsigned int tamanio = 1000;

    private:
        double escala;
        Cuerpo* cuerpo;

};

#endif // GRAFICA_H
