#ifndef CUERPO_H
#define CUERPO_H

//Para los planetas:
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>

class Cuerpo: public QGraphicsEllipseItem
{
    private:
        double posicionx;
        double posiciony;
        double posicionInicialx;
        double posicionInicialy;
        double ax;
        double ay;
        double theta;
        double masa;
        double velocidadx;
        double velocidady;
        double distanciaAcuerpocentral;
    public:

        Cuerpo(int Posicionx, int Posiciony);
        void calcularAx();
        void calcularAy();
        void calcularTheta(double a, double b); //Calcula theta y lo asigna a la variable privada
        void calcularDistancia(double x1, double y1);   //x1 y y1 son la posicion del sol

        void setPosicionx(int posicionx);
        void setPosiciony(int posiciony);
        void setMasa(double masa);

        double getPosicionx();  //muestra la posicion en x
        double getPosiciony();  //muestra la posicion en y
        double getAx(); //muestra la aceleracion en x
        double getAy(); //muestra la aceleracion en y
        double getMasa(); //muestra la masa del cuerpo
};

#endif // CUERPO_H
