#include "simulacion.h"
#include "ui_simulacion.h"

extern QGraphicsScene * escena;
extern unsigned int tamanioSol;
extern QVector<Grafica*> cuerposEnPantalla;
extern unsigned int posicion;

#include <QDebug> //

Simulacion::Simulacion(QWidget *parent) : QMainWindow(parent), ui(new Ui::Simulacion){
    ui->setupUi(this);
    //escena->setBackgroundBrush(QImage(":/FONDO_escena.png")); //Fondo del espacio
    ui->Grafica->setScene(escena);
    dt=1;

    timer = new QTimer(this); //crea el timer
    escena = new QGraphicsScene(this);  //Crear la escena
    escena->setSceneRect(0,0,tamanio,tamanio);  //Tamaño real del plano donde se graficarán los cuerpos

    ui->Grafica->setScene(escena);
    ui->centralwidget->adjustSize();

    timer->stop();  //para el timer
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));

    cuerposEnPantalla.append(new Grafica(0, 0, 0, 0, 0, "SOL", tamanioSol/2, 2));   //(tamanio/2)-(tamanioSol/2),(tamanio/2)-(tamanioSol/2)
    cuerposEnPantalla.at(0)->getCuerpo()->setRect(0,0,tamanioSol, tamanioSol);  //le da forma al cuerpo central
    cuerposEnPantalla.at(0)->getCuerpo()->setBrush(Qt::yellow);      //le da el color al cuerpo central
    cuerposEnPantalla.at(0)->getCuerpo()->setPos((tamanio/2)-(tamanioSol/2), (tamanio/2)-(tamanioSol/2));
    escena->addItem(cuerposEnPantalla.at(0)->getCuerpo());

    cuerposEnPantalla.append(new Grafica(0, -100, 1, 0.2, 0, "Marte", tamanioPlaneta/2, 1));

    for(int i=1;i<cuerposEnPantalla.size();i++){
        cuerposEnPantalla.at(i)->actualizar(dt);
        escena->addItem(cuerposEnPantalla.at(i));
    }
}

Simulacion::~Simulacion(){
    delete timer;
    delete escena;
    delete ui;
}

void Simulacion::actualizar(){

/*
    for (int i=0; i<cuerposEnPantalla.size();i++){
        for(int j=0; j<cuerposEnPantalla.size();j++){
            if(i!=j){
                cuerposEnPantalla.at(i)->getCuerpo()-> acelerar(cuerposEnPantalla.at(j)->getCuerpo()->getPosicionx(),
                                                                cuerposEnPantalla.at(j)->getCuerpo()->getPosiciony());
            }
        }
    }
*/

    for(int i=1;i<cuerposEnPantalla.size();i++){
        cuerposEnPantalla.at(i)->getCuerpo()-> acelerar();
        cuerposEnPantalla.at(i)->actualizar(dt);
    }
}

/*
void Simulacion::on_nuevoCuerpo_clicked(){

    if(inicio == false){
        estado = false; //supone que:
                        //el cuerpo no se encuentra en el QVector
                        //tiene nombre
                        //su masa es menor que la del sol y mayor a cero
                        //el cuerpo se encuentra dentro de la escena

        if(abs(ui->posicionInicialX_C->value())>=fueradeLimites || abs(ui->posicionInicialY_C->value())>=fueradeLimites)
            estado = true; //el cuerpo se sale de la escena
        else if(ui->nombre_C->text()=="" || ui->masa_C->value()==0 || ui->masa_C->value()>cuerposEnPantalla.at(0)->getCuerpo()->getMasa())
            estado = true;  //el cuerpo no tiene nombre, o tiene masa cero o mayor a la del sol
        else{
            for(int i=1;i<cuerposEnPantalla.size();i++){
                if(cuerposEnPantalla.at(i)->getCuerpo()->getNombre() == ui->nombre_C->text().toUpper()){
                    estado = true;  //el cuerpo se encuentra en el vector
                    break;
                }
            }
        }

        if (estado == false){
            cuerposEnPantalla.append(new Grafica(ui->posicionInicialX_C->value(),
                                                 ui->posicionInicialY_C->value(),
                                                 ui->masa_C->value(),
                                                 ui->velocidadInicialX_C->value(),
                                                 ui->velocidadInicialY_C->value(),
                                                 ui->nombre_C->text().toUpper(), 1));    //Debe recibir todas las caracteristicas de los planetas
            ui->listaPlanetas->addItem(ui->nombre_C->text().toUpper()); //Se agrega el cuerpo a una lista para hacerle seguimiento



            for(int i=1;i<cuerposEnPantalla.size();i++){
                qDebug() << "******************> ";
                cuerposEnPantalla.at(i)->actualizar(dt);
                escena->addItem(cuerposEnPantalla.at(i));
            }


        }
    }
}
*/

void Simulacion::on_iniciarSimulacion_clicked(){
    if(inicio == false){
        inicio = true;  //no permite agregar más planetas
        timer->start(dt);   //inicia la simulación
    }
}

/*
void Simulacion::on_listaPlanetas_clicked(const QModelIndex &index){

    //solo debe funcionar if(inicio == true){}
    w_seguimiento.show();

    QList<QListWidgetItem*> items = ui->listaPlanetas->selectedItems();
    foreach(QListWidgetItem * item, items){
        posicion = ui->listaPlanetas->row(item);
        qDebug() << "selección: " << ui->listaPlanetas->row(item);
        //delete ui->listaPlanetas->takeItem(ui->listaPlanetas->row(item)); //borrar de la lista que se muestra, el elemento seleccionado
    }
}
*/
//if(estado == true) ui->listaPlanetas->clear(); //la idea es borrar toda la lista y reescribirla con los planetas que se encuentran en escena como tal
