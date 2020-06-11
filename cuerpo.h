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
    public:
        Cuerpo();
        Cuerpo(int Posicionx, int Posiciony);
        double calculaAceleracion();
        void setAx();
        void setAy();
        double calcularTheta(double a, double b);
        void setPosicionx(int posicionx);
        void setPosiciony(int posiciony);
        void setMasa(double masa);
        double getPosicionx();
        double getPosiciony();
        double distanciaCuerpo(double x1, double y1);
        double getAx();
        double getAy();
};

#endif // CUERPO_H
