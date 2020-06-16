#include "grafica.h"

extern QGraphicsScene * escena;
extern unsigned int tamanioSol;
extern unsigned int tamanioPlaneta;

#include <QDebug>

Grafica::Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombre, double radio_, unsigned short int tipo): escala(1){

    qDebug() << "PLANETA AÑADIDO." << endl;
    cuerpo = new Cuerpo(posicionInicialx_, posicionInicialy_, masa_, velocidadx_, velocidady_, nombre, radio_);
}

Grafica::~Grafica(){
    delete cuerpo;
}

QRectF Grafica::boundingRect() const {
    return QRectF(-1*escala*cuerpo->getRadio(),-1*escala*cuerpo->getRadio(),2*escala*cuerpo->getRadio(),2*escala*cuerpo->getRadio());
}

void Grafica::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->setBrush(Qt::cyan);        //asigna el color
    painter->drawEllipse(boundingRect());    //dibuja una elipse encerrada en la boundingRect
}

void Grafica::setEscala(float s){
    escala = s;
}

void Grafica::actualizar(float dt){
    cuerpo->actualizar(dt);
    qDebug() << "x[" << ((cuerpo->posicionCuerpoCentral)+cuerpo->getPosicionx())*escala << "], " <<
                "y[" << ((cuerpo->posicionCuerpoCentral)-cuerpo->getPosiciony())*escala << "], " <<
                "theta[" << cuerpo->getTheta() << "], " <<
                "ax[" << cuerpo->getAx() << "], " <<
                "ay[" << cuerpo->getAy() << "], " <<
                "vx[" << cuerpo->getVelocidadx() << "], " <<
                "vy[" << cuerpo->getVelocidady() << "]";

    setPos(((cuerpo->posicionCuerpoCentral)+cuerpo->getPosicionx())*escala,
           ((cuerpo->posicionCuerpoCentral)-cuerpo->getPosiciony())*escala);
}

Cuerpo *Grafica::getCuerpo(){
    return cuerpo;
}


/*
   Grafica::Grafica

    if(tipo == 1){ //se dibuja un planeta
        cuerpo->setRect(0,0,tamanioPlaneta, tamanioPlaneta);      //le da forma al cuerpo en orbita
        cuerpo->setBrush(Qt::cyan);      //le da el color al cuerpo en orbita
        cuerpo->setPos(((cuerpo->posicionxCuerpoCentral)+posicionInicialx_)-tamanioPlaneta/2,((cuerpo->posicionyCuerpoCentral)-posicionInicialy_)-tamanioPlaneta/2);   //se le pone la posicion al cuerpo
    }
    else{
        cuerpo->setRect(0,0,tamanioSol, tamanioSol);      //le da forma al cuerpo central
        cuerpo->setBrush(Qt::yellow);      //le da el color al cuerpo central
        cuerpo->setPos((tamanio/2)-(tamanioSol/2), (tamanio/2)-(tamanioSol/2));   //se le pone la posicion al cuerpo central
    }
    escena->addItem(cuerpo);    //se añade el cuerpo a la escena
*/
