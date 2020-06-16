#ifndef SEGUIMIENTO_H
#define SEGUIMIENTO_H

#include <QMainWindow>

namespace Ui {
class Seguimiento;
}

class Seguimiento : public QMainWindow
{
    Q_OBJECT

public:
    explicit Seguimiento(QWidget *parent = nullptr);
    ~Seguimiento();

private slots:
    void on_inicioSeguimiento_clicked(bool checked);


private:
    Ui::Seguimiento *ui;
};

#endif // SEGUIMIENTO_H
