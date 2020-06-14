#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QGraphicsView>
#include <QGraphicsScene>

#include "cuerpo.h"
#include "grafica.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);

        bool inicio = false;    //Permite saber si se deshabilita la opción de añadir planetas e inicia la simulación

        ~MainWindow();

    private slots:
        void actualizar();
        void on_nuevoCuerpo_clicked();
        void on_pushButton_clicked();

    private:
        Ui::MainWindow *ui;
        QVector<Grafica*> cuerposEnPantalla = {};   //Para crear varios planetas
        bool estado;


        Cuerpo * getCuerpo();

        QTimer *timer;              //timer para los intervalos de tiempo entre cada frame
        float intervalo;                   //intervalo de tiempo entre frames
        int h_limit;                //longitud en X del mundo
        int v_limit;                //longitud en Y del mund



};
#endif // MAINWINDOW_H
