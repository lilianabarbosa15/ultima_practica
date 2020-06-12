#include "simulacion.h"

#include <QDebug>

Simulacion::Simulacion(QWidget *parent)
{
    //Crear la escena   (no cambia)
    escena = new QGraphicsScene();
    //escena->setBackgroundBrush(QImage(":/FONDO_escena.png"));  //Fondo del espacio

    //Crear el cuerpo central a la escena
    planeta = new Cuerpo(600,600);      //Al ingresar esos valores se debe mostrar el elemento en esa posicion
    planeta->setMasa(5000);

    planeta->setRect(0,0,40,40);      //le da forma al cuerpo central
    planeta->setBrush(Qt::yellow);      //le da el color al cuerpo central

    //Añadir el cuerpo central a la escena
    planeta->setPos(tamanio/2,tamanio/2);   //se le pone la posicion al cuerpo
    escena->addItem(planeta);


    //Que se pueda ver todo
    view = new QGraphicsView(escena);

    view->show();
    view->setFixedSize(700,600);
    escena->setSceneRect(0,0,tamanio,tamanio);



    qDebug() << "Masa: " << planeta->getMasa();


/*

    //planeta->setRect(0,0,10,10);      //le da forma al cuerpo en orbita
    //planeta->setBrush(Qt::cyan);      //le da el color al cuerpo en orbita


    //Hacer enfoque al personaje que va a orbitar
    planeta->setFlag(QGraphicsItem::ItemIsFocusable);
    planeta->setFocus();

*/


}
