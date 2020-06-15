#ifndef CUERPO_H
#define CUERPO_H

//Para hacer los calculos matematicos:
#include <math.h>

//Para los planetas:
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>

extern unsigned int tamanio;    //tamaño de la escena

class Cuerpo: public QGraphicsEllipseItem
{
    private:
        double Gravitacion = 6.67384*(pow(10,-11));

        //Lo que se le pide al usuario:
        double posicionx;
        double posiciony;
        double masa;
        double velocidadx;
        double velocidady;
        QString nombre;

        //Valores que se calculan para cada planeta:
        double ax;
        double ay;
        double theta;
        double radio;

    public: //Valores del sol necesarios para todos los calculos:
        double posicionxCuerpoCentral = (tamanio/2);  //posición en x del sol
        double posicionyCuerpoCentral = (tamanio/2);  //posición en y del sol
        //masa del sol tambien pero es una variable que se encuentra en un QVector global

    public:
        Cuerpo(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombre);
        double getPosicionx();  //muestra la posicion en x
        double getPosiciony();  //muestra la posicion en y
        double getMasa(); //muestra la masa del cuerpo
        double getRadio(); //muestra el radio del cuerpo

        double getAx(); //muestra la aceleracion en x
        double getAy(); //muestra la aceleracion en y
        double getVelocidadx(); //muestra la velocidad en x
        double getVelocidady(); //muestra la velocidad en y

        void acelerar(double posicion_X, double posicion_Y);
        void actualizar(double tiempo);

        QString getNombre();

        void setMasa(double m);
};
#endif // CUERPO_H
