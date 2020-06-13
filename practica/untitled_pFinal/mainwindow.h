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

        //Permite saber si se deshabilita la opción de añadir planetas e inicia la simulación:
        bool inicio = false;

        ~MainWindow();

    private slots:
        void on_nuevoCuerpo_clicked();
        void on_pushButton_clicked();

    public:
        Ui::MainWindow *ui;
        //QVector<grafica*> bars;   //Para crear varios planetas

};
#endif // MAINWINDOW_H
