#ifndef CUERPO_H
#define CUERPO_H

//Para hacer los calculos matematicos:
#include <math.h>

//Para los planetas:
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>

class Cuerpo: public QGraphicsEllipseItem
{
    private:
        double posicionx;
        double posiciony;
        double masa;
        double radioC;
        double velocidadx;
        double velocidady;
        double ax;
        double ay;
        double Gravitacion = 6.67384*(pow(10,-11));

        double theta;
        double radio;
        double posicionxCuerpoCentral;  //posición en x del sol
        double posicionyCuerpoCentral;  //posición en y del sol
        double masaCuerpoCentral;       //masa del sol

    public:
        Cuerpo(double posicionInicialx_, double posicionInicialy_, double masa_, int radio_, double velocidadx_, double velocidady_);

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

        double getRadioC();

};
#endif // CUERPO_H
