#ifndef CUERPO_H
#define CUERPO_H

class Cuerpo{
    private:
        double posicionx;
        double posiciony;
        double posicionInicialx;
        double posicionInicialy;
        double ax;
        double ay;
        double theta;
        double masa;
        double velocidadx;
        double velocidady;
        double distanciaAcuerpocentral;
    public:

        Cuerpo(int Posicionx, int Posiciony);
        double calculaAceleracion();
        void setAx();
        void setAy();
        void calcularTheta(double a, double b); //Calcula theta y lo asigna a la variable privada
        void setPosicionx(int posicionx);
        void setPosiciony(int posiciony);
        void setMasa(double masa);
        double getPosicionx();
        double getPosiciony();
        void distanciaCuerpo(double x1, double y1);   //x1 y y1 son la posicion del sol
        double getAx();
        double getAy();
};

#endif // CUERPO_H
