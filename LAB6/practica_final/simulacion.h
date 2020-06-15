#ifndef SIMULACION_H
#define SIMULACION_H

#include <QMainWindow>

#include <QGraphicsView>
#include <QGraphicsScene>
#include "cuerpo.h"
#include "grafica.h"

namespace Ui {
class Simulacion;
}

class Simulacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Simulacion(QWidget *parent = nullptr);
    ~Simulacion();
    bool inicio = false;    //Permite saber si se deshabilita la opción de añadir planetas e inicia la simulación

private slots:
    void actualizar();
    void on_nuevoCuerpo_clicked();


    void on_iniciarSimulacion_clicked();

private:
    Ui::Simulacion *ui;
    bool estado;

    Cuerpo* cuerpocentral;




    Cuerpo * getCuerpo();

    QTimer *timer;              //timer para los intervalos de tiempo entre cada frame
    float intervalo;                   //intervalo de tiempo entre frames
    int h_limit;                //longitud en X del mundo
    int v_limit;                //longitud en Y del mundo

};

#endif // SIMULACION_H
