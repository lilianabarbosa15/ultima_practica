#ifndef SIMULACION_H
#define SIMULACION_H

#include <QMainWindow>

#include <QGraphicsView>
#include <QGraphicsScene>
#include "cuerpo.h"
#include "grafica.h"
#include "seguimiento.h"
#include <QTimer>

extern unsigned int tamanioPlaneta;

#include <QListWidgetItem>

namespace Ui {class Simulacion;}

class Simulacion : public QMainWindow {
    Q_OBJECT

public:
    explicit Simulacion(QWidget *parent = nullptr);
    ~Simulacion();
    bool inicio = false;    //permite saber si se deshabilita la opción de añadir planetas e inicia la simulación
    Seguimiento w_seguimiento;

private slots:
    void actualizar();
    //void on_nuevoCuerpo_clicked();
    void on_iniciarSimulacion_clicked();
    //void on_listaPlanetas_clicked(const QModelIndex &index);

private:
    Ui::Simulacion *ui;
    QTimer *timer;              //timer para los intervalos de tiempo entre cada frame
    // QGraphicsScene *scene es global
    float dt;                   //intervalo de tiempo entre frames
    unsigned int fueradeLimites = ((tamanio/2)+(tamanioPlaneta/2));
    //
    //QVector<Grafica*> bars es global

    bool estado;
    Cuerpo* cuerpocentral;

};

#endif // SIMULACION_H
