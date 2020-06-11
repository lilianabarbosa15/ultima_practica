#include "cuerpo.h"
#include <math.h>


Cuerpo::Cuerpo()
{

}

Cuerpo::Cuerpo(int posicionInicialx, int posicionInicialy){
    this->posicionInicialx=posicionInicialx;
    this->posicionInicialy=posicionInicialy;

        }

void Cuerpo::setMasa(double masa){
    this->masa=masa;
}

void Cuerpo::setPosicionx(int posicionx){
    this->posicionx=posicionx;
}

void Cuerpo::setPosiciony(int posiciony){
    this->posiciony=posiciony;
}

double Cuerpo::getPosicionx(){
    return this->posicionx;
}

double Cuerpo::getPosiciony(){
    return this->posiciony;
}

double Cuerpo::calcularTheta(double posicionxCuerpoCentral, double posicionyCuerpoCentral){
    double parametroTheta;
    parametroTheta=(this->posiciony-posicionyCuerpoCentral)/(this->posicionx- posicionxCuerpoCentral);
    return atan(parametroTheta);
}

double Cuerpo::distanciaCuerpo(double x1, double y1){
    return sqrt(pow(this->posicionx-x1,2)-pow(this->posiciony-y1,2));
}

void Cuerpo::setAx(){

}


