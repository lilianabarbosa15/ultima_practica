#include "grafica.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

//extern Ui::MainWindow* identificador;

Grafica::Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, int radio_, double velocidadx_, double velocidady_){

    qDebug() << "thread created------------------------" << endl;

    //Crear la escena
    escena = new QGraphicsScene();
    //escena->setBackgroundBrush(QImage(":/FONDO_escena.png"));  //Fondo del espacio

    //Que se pueda ver todo
    view = new QGraphicsView(escena);
    //ui->Grafica->setWidget(view);

    view->setFixedSize(670,460);    //Tamaño de la grafica externa
    escena->setSceneRect(0,0,tamanio,tamanio);  //Tamaño real del plano donde se graficarán los cuerpos

    //Crear el cuerpo central a la escena
    //planeta = new Cuerpo(600,600,0,0,0,0);      //Al ingresar esos valores se debe mostrar el elemento en esa posicion

    //planeta->setRect(0,0,40,40);      //le da forma al cuerpo central
    //planeta->setBrush(Qt::yellow);      //le da el color al cuerpo central

    //Añadir el cuerpo central a la escena
    //planeta->setPos(tamanio/2,tamanio/2);   //se le pone la posicion al cuerpo
    //escena->addItem(planeta);

}



