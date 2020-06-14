#ifndef PRUEBA_H
#define PRUEBA_H

#include <QMainWindow>

namespace Ui {
class prueba;
}

class prueba : public QMainWindow
{
    Q_OBJECT

public:
    explicit prueba(QWidget *parent = nullptr);
    ~prueba();

private:
    Ui::prueba *ui;
};

#endif // PRUEBA_H
