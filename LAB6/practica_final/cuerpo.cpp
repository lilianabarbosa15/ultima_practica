#include "cuerpo.h"
#include "grafica.h"

extern QVector<Grafica*> cuerposEnPantalla;

#include <QDebug> //

Cuerpo::Cuerpo(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombreC, double radio_){

    pos_inicial_X = posicionInicialx_;  //no se modifica
    pos_inicial_Y = posicionInicialy_;  //no se modifica
    vel_inicial_X = velocidadx_;    //no se modifica
    vel_inicial_Y = velocidady_;    //no se modifica

    posicionx = posicionInicialx_;
    posiciony = posicionInicialy_;
    masa = masa_;
    nombre = nombreC;
    velocidadx = velocidadx_;
    velocidady = velocidady_;
    Gravitacion = 6.67384*(pow(10,-11));
    ax = 0;
    ay = 0;
    radio = radio_;
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

double Cuerpo::getTheta() {
    return theta;
}

void Cuerpo::acelerar(){        //necesita las posiciones tomadas de otro cuerpo

    theta = atan((posiciony - posicionCuerpoCentral)/(posicionx - posicionCuerpoCentral));   //calculo del angulo
    r = sqrt(pow((posicionx - posicionCuerpoCentral),2) + pow((posiciony - posicionCuerpoCentral),2));
    //r = sqrt(pow((posicionx - posicionCuerpoCentral),2) + pow((posiciony - posicionCuerpoCentral),2));

    ax = ((Gravitacion * (cuerposEnPantalla.at(0)->getCuerpo()->getMasa()) * cos(theta))/(pow(r,2)));
    ay = ((Gravitacion * (cuerposEnPantalla.at(0)->getCuerpo()->getMasa()) * sin(theta))/(pow(r,2)));
}

void Cuerpo::actualizar(float dt){                             //calcula las posiciones en x y y de los cuerpos.

    velocidadx = vel_inicial_X + (ax*dt);
    velocidady = vel_inicial_Y + (ay*dt);
    posicionx = pos_inicial_X + (velocidadx*dt) + ((ax*(pow(dt,2)))/2);
    posiciony = pos_inicial_Y + (velocidady*dt) + ((ay*(pow(dt,2)))/2);
    qDebug() << "posiciony: " << posiciony;
}

QString Cuerpo::getNombre(){
    return nombre;
}

void Cuerpo::setMasa(double m){
    masa = m;
}
