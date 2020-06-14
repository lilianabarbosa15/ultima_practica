#include "cuerpo.h"

Cuerpo::Cuerpo(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombreC){
    posicionx = posicionInicialx_;
    posiciony = posicionInicialy_;
    masa = masa_;
    nombre = nombreC;
    velocidadx = velocidadx_;
    velocidady = velocidady_;
    ax = 0;
    ay = 0;
}

double Cuerpo::getPosicionx(){
    return posicionx;
}

double Cuerpo::getPosiciony(){
    return posiciony;
}

double Cuerpo::getMasa(){
    return masa;    //retorna el valor de la masa del cuerpo
}

double Cuerpo::getRadio(){
    return radio;
}

double Cuerpo::getAx(){
    return ax;    //retorna la aceleración en x
}

double Cuerpo::getAy(){
    return ay;    //retorna la aceleración en y
}

double Cuerpo::getVelocidadx(){
    return velocidadx;
}

double Cuerpo::getVelocidady(){
    return velocidady;
}

void Cuerpo::acelerar(double posicion_X, double posicion_Y){        //necesita las posiciones tomadas de otro cuerpo
    theta = atan((posiciony-posicionyCuerpoCentral)/(posicionx- posicionxCuerpoCentral));   //calculo del angulo
    radio = sqrt(pow((posicion_X-posicionxCuerpoCentral),2) + pow((posicion_Y-posicionyCuerpoCentral),2));
    ax = ax + (((Gravitacion * masaCuerpoCentral)/(pow(radio,2)))*cos(theta));
    ay = ay + (((Gravitacion * masaCuerpoCentral)/(pow(radio,2)))* sin(theta));
}

void Cuerpo::actualizar(double tiempo){                             //calcula las posiciones en x y y de los cuerpos.
    velocidadx = velocidadx + (ax*tiempo);
    velocidady = velocidady + (ay*tiempo);
    posicionx = posicionx + (velocidadx*tiempo) + ((ax*(pow(tiempo,2)))/2);
    posiciony = posiciony + (velocidady*tiempo) + ((ay*(pow(tiempo,2)))/2);
}

QString Cuerpo::getNombre()
{
    return nombre;
}
