#include "cuerpo.h"
#include <math.h>
#define Gravitacion 6.67384*pow(10,-11);

Cuerpo::Cuerpo(int posicionInicialx, int posicionInicialy){
    this->posicionInicialx = posicionInicialx;
    this->posicionInicialy = posicionInicialy;
}

/*double Cuerpo::calculaAceleracion()
{
}*/

void Cuerpo::setMasa(double masa){
    this->masa = masa;
}

void Cuerpo::setPosicionx(int posicionx){
    this->posicionx = posicionx;
}

void Cuerpo::setPosiciony(int posiciony){
    this->posiciony = posiciony;
}

double Cuerpo::getPosicionx(){
    return this->posicionx;
}

double Cuerpo::getPosiciony(){
    return this->posiciony;
}

void Cuerpo::calcularTheta(double posicionxCuerpoCentral, double posicionyCuerpoCentral){
    double parametroTheta = (this->posiciony-posicionyCuerpoCentral)/(this->posicionx- posicionxCuerpoCentral);
    this->theta = atan(parametroTheta);
}

void Cuerpo::distanciaCuerpo(double x1, double y1){     //  <-----  Revisar
    double distancia = pow(this->posicionx-x1,2)-pow(this->posiciony-y1,2);
    this->distanciaAcuerpocentral = (sqrt(distancia));
}


double Cuerpo::getAx()
{
    return this->ax;    //retorna la aceleración en x
}

double Cuerpo::getAy()
{
    return this->ay;    //retorna la aceleración en y
}

void Cuerpo::setAx(){
    (this->ax) = Gravitacion;
    (this->ax) *= ((this->masa) * cos(this->theta));
    (this->ax) /= pow(this->distanciaAcuerpocentral,2);
}

void Cuerpo::setAy()
{
    (this->ay) = Gravitacion;
    (this->ay) *= ((this->masa) * sin(this->theta));
    (this->ay) /= pow(this->distanciaAcuerpocentral,2);
}


