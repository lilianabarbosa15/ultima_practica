#include "simulacion.h"
#include "ui_simulacion.h"

extern QGraphicsScene * escena;
extern unsigned int tamanioSol;
extern QVector<Grafica*> cuerposEnPantalla;

#include <QDebug> //

Simulacion::Simulacion(QWidget *parent) :QMainWindow(parent), ui(new Ui::Simulacion){

    ui->setupUi(this);
    escena = new QGraphicsScene(); //Crear la escena
    //escena->setBackgroundBrush(QImage(":/FONDO_escena.png"));  //Fondo del espacio
    ui->Grafica->setScene(escena);
    escena->setSceneRect(0,0,tamanio,tamanio);  //Tamaño real del plano donde se graficarán los cuerpos
    cuerposEnPantalla.append(new Grafica((tamanio/2)-(tamanioSol/2),(tamanio/2)-(tamanioSol/2), 0, 0, 0, "SOL", 2));
}

Simulacion::~Simulacion(){

    //delete timer;
    delete escena;
    delete ui;
}

void Simulacion::actualizar(){

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

void Simulacion::on_nuevoCuerpo_clicked(){

    if(inicio == false){

        estado = false; //inicia suponiendo que el cuerpo no se encuentra en el QVector
        qDebug() << "cuerpos En Pantalla: ";

        for(int i=1;i<cuerposEnPantalla.size();i++){
            if(cuerposEnPantalla.at(i)->getCuerpo()->getNombre() == ui->nombre_C->text().toUpper()){
                qDebug() << cuerposEnPantalla.at(i)->getCuerpo()->getNombre();
                estado = true;  //el cuerpo se encuentra en el vector
                break;
            }
        }

        qDebug() << endl << estado;

        if (estado == false){
            cuerposEnPantalla.append(new Grafica(ui->posicionInicialX_C->value(),
                                                 ui->posicionInicialY_C->value(),
                                                 ui->masa_C->value(),
                                                 ui->velocidadInicialX_C->value(),
                                                 ui->velocidadInicialY_C->value(),
                                                 ui->nombre_C->text().toUpper(), 1));    //Debe recibir todas las caracteristicas de los planetas
            ui->listaPlanetas->addItem(ui->nombre_C->text().toUpper());
        }

        //if(estado == true)
        //    ui->listaPlanetas->clear(); //la idea es borrar toda la lista y reescribirla con los planetas que se encuentran en escena como tal
    }
}

void Simulacion::on_iniciarSimulacion_clicked(){

    if(inicio == false){
        inicio = true; //Inicia la simulación y no permite agregar más planetas

        //Inicia la ejecución de la simulación   <-----------------------------

        //orbitas.start();
    }
}
