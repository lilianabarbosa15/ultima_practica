#include "grafica.h"

#include <QDebug>

//extern Ui::MainWindow* identificador;
extern QGraphicsScene * escena;
extern unsigned int tamanioSol;
extern unsigned int tamanioPlaneta;

Grafica::Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombre): escala(0.07){

    qDebug() << "CUERPO AÑADIDO -   -   -   -   -   -   -   -   -   -   -   -   -" << endl;

    cuerpo = new Cuerpo(posicionInicialx_, posicionInicialy_, masa_, velocidadx_, velocidady_, nombre);

    cuerpo->setRect(0,0,tamanioPlaneta, tamanioPlaneta);      //le da forma al cuerpo en orbita
    cuerpo->setBrush(Qt::cyan);      //le da el color al cuerpo en orbita
    cuerpo->setPos(((cuerpo->posicionxCuerpoCentral)+posicionInicialx_)-tamanioPlaneta/2,((cuerpo->posicionyCuerpoCentral)-posicionInicialy_)-tamanioPlaneta/2);   //se le pone la posicion al cuerpo
    escena->addItem(cuerpo);    //se añade el cuerpo a la escena


/*
    cuerpo->setRect(0,0,40,40);      //le da forma al cuerpo central
    cuerpo->setBrush(Qt::yellow);      //le da el color al cuerpo central

    //Añadir el cuerpo central a la escena
    cuerpo->setPos(tamanio/2,tamanio/2);   //se le pone la posicion al cuerpo
    escena->addItem(cuerpo);
*/

}

Grafica::~Grafica(){
    delete cuerpo;
}

QRectF Grafica::boundingRect() const {
    qDebug() << "pasa por boundingRect()-----------------------" << endl;
    return QRectF(-1*escala*cuerpo->getRadio(),-1*escala*cuerpo->getRadio(),2*escala*cuerpo->getRadio(),2*escala*cuerpo->getRadio());
}

void Grafica::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->setBrush(Qt::cyan);        //asigna el color
    painter->drawEllipse(boundingRect());    //dibuja una elipse encerrada en la boundingRect
}

void Grafica::setEscala(float s){
    escala=s;
}

void Grafica::actualizar(float intervalo){
    cuerpo->actualizar(intervalo);
    setPos(cuerpo->getPosicionx()*escala,(-cuerpo->getPosiciony())*escala);
}

Cuerpo *Grafica::getCuerpo(){
    return cuerpo;
}




/*
    //Crear la escena
    escena = new QGraphicsScene();
    //escena->setBackgroundBrush(QImage(":/FONDO_escena.png"));  //Fondo del espacio

    //Que se pueda ver todo
    view = new QGraphicsView(escena);
    identificador->Grafica->setWidget(view);

    view->setFixedSize(670,460);    //Tamaño de la grafica externa
    escena->setSceneRect(0,0,tamanio,tamanio);  //Tamaño real del plano donde se graficarán los cuerpos

    //Crear el cuerpo central a la escena
    cuerpo = new Cuerpo(600,600,0,0,0,0);      //Al ingresar esos valores se debe mostrar el elemento en esa posicion

    cuerpo->setRect(0,0,40,40);      //le da forma al cuerpo central
    cuerpo->setBrush(Qt::yellow);      //le da el color al cuerpo central

    //Añadir el cuerpo central a la escena
    cuerpo->setPos(tamanio/2,tamanio/2);   //se le pone la posicion al cuerpo
    escena->addItem(cuerpo);
*/

