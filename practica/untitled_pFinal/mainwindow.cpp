#include "mainwindow.h"


//Para pasar los double a String:
#include <QString>

#include <QDebug>

extern QGraphicsScene * escena;
extern unsigned int tamanio;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Crear la escena
    escena = new QGraphicsScene();
    //escena->setBackgroundBrush(QImage(":/FONDO_escena.png"));  //Fondo del espacio

    //Que se pueda ver todo
    ui->Grafica->setScene(escena);
    escena->setSceneRect(0,0,tamanio,tamanio);  //Tamaño real del plano donde se graficarán los cuerpos
}

MainWindow::~MainWindow()
{
    //delete timer;
    delete escena;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(inicio == false){
        inicio = true; //Inicia la simulación y no permite agregar más planetas

        //Inicia la ejecución de la simulación   <-----------------------------

        //orbitas.start();


    }
}

void MainWindow::on_nuevoCuerpo_clicked()
{
    if(inicio == false){

        //double posicionInicialX_;
        //posicionInicialX_ = ui->posicionInicialX_C->value();
        //QString valueAsString = QString::number(posicionInicialX_);
        //ui->datosPosicionX->setText(valueAsString);   //Agrega los numeros a una sección en la pantalla


        qDebug() << "NUEVO PLANETA" ;


        cuerposEnPantalla.append(new Grafica(600,600,7000,500,0,0));//Debe recibir ui, y todas las caracteristicas de los planetas

        for(int i=0;i<cuerposEnPantalla.size();i++){
            cuerposEnPantalla.at(i)->actualizar(intervalo);
            escena->addItem(cuerposEnPantalla.at(i));
            qDebug() << "aja";
        }


    }
}

void MainWindow::actualizar()//se actualiza la posicion
{
    for (int i=0; i<cuerposEnPantalla.size();i++){
        for(int j=0; j<cuerposEnPantalla.size();j++){
            if(i!=j){
                cuerposEnPantalla.at(i)->getCuerpo()-> acelerar(cuerposEnPantalla.at(j)->getCuerpo()->getPosicionx(),
                                                                cuerposEnPantalla.at(j)->getCuerpo()->getPosiciony());
            }
        }
    }
    for(int i=0;i<cuerposEnPantalla.size();i++){
        cuerposEnPantalla.at(i)->actualizar(intervalo);

    }
}



/*
    ui->Grafica->setScene(scene);
    qDebug()<<ui->graphicsView->size();
    ui->centralWidget->adjustSize();
    qDebug()<<ui->centralWidget->size();

    //  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

    //Crear el cuerpo central a la escena
    cuerpo = new Cuerpo(600,600,0,0,0,0);      //Al ingresar esos valores se debe mostrar el elemento en esa posicion

    cuerpo->setRect(0,0,40,40);      //le da forma al cuerpo central
    cuerpo->setBrush(Qt::yellow);      //le da el color al cuerpo central

    //Añadir el cuerpo central a la escena
    cuerpo->setPos(tamanio/2,tamanio/2);   //se le pone la posicion al cuerpo
    escena->addItem(cuerpo);



    QGraphicsView *view;

    , Ui::MainWindow* identificador
*/












