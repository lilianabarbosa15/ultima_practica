#include <QApplication>
#include "simulacion.h"

Simulacion *S;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    /*
    QWidget w;
    w.setGeometry(0,0,200,200);
    w.show();
    */


    S = new Simulacion();



    return a.exec();
}


