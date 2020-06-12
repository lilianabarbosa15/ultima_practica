#include <QApplication>
#include "simulacion.h"

Simulacion *S;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    //Tabla de visualización de los valores de los planetas
    QWidget tabla;
    tabla.setGeometry(7,300,0,0);
    tabla.setFixedSize(350,200);

    //tabla.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    tabla.show();




    S = new Simulacion();



    return a.exec();
}


