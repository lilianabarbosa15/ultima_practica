#ifndef GRAFICA_H
#define GRAFICA_H


#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"

class Grafica: public QGraphicsItem
{
    public:
        Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombre);
        ~Grafica();
        QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pintara el objeto
        void setEscala(float s);
        void actualizar(float intervalo);
        Cuerpo * getCuerpo();

    private:
        Cuerpo* cuerpo;
        float escala;
};

#endif // GRAFICA_H
