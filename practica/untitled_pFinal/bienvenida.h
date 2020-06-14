#ifndef BIENVENIDA_H
#define BIENVENIDA_H

#include <QMainWindow>

namespace Ui {
class Bienvenida;
}

class Bienvenida : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bienvenida(QWidget *parent = nullptr);
    ~Bienvenida();

private:
    Ui::Bienvenida *ui;
};

#endif // BIENVENIDA_H
