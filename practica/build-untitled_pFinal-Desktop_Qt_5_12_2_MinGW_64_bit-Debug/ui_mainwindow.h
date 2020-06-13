/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QScrollArea *Grafica_3;
    QWidget *scrollAreaWidgetContents;
    QGraphicsView *Grafica;
    QLabel *label_8;
    QFrame *line_6;
    QFrame *line_7;
    QScrollArea *caracteristicasCuerpos;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *nuevoCuerpo;
    QPushButton *pushButton;
    QLabel *posicionInicialX_label;
    QLabel *posicionInicialY_label;
    QLabel *velocidadInicialX_label;
    QLabel *velocidadInicialY_label;
    QLabel *label;
    QDoubleSpinBox *posicionInicialX_C;
    QDoubleSpinBox *posicionInicialY_C;
    QDoubleSpinBox *velocidadInicialX_C;
    QDoubleSpinBox *velocidadInicialY_C;
    QDoubleSpinBox *masa_C;
    QLabel *radio_label;
    QFrame *line_14;
    QLineEdit *nombre_C;
    QLabel *nombre;
    QScrollArea *seguimientoCuerpos;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_2;
    QFrame *line;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1091, 594);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafica_3 = new QScrollArea(centralwidget);
        Grafica_3->setObjectName(QString::fromUtf8("Grafica_3"));
        Grafica_3->setGeometry(QRect(20, 20, 711, 531));
        Grafica_3->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 709, 529));
        Grafica = new QGraphicsView(scrollAreaWidgetContents);
        Grafica->setObjectName(QString::fromUtf8("Grafica"));
        Grafica->setGeometry(QRect(15, 40, 681, 481));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 10, 47, 14));
        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 10, 301, 21));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(scrollAreaWidgetContents);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(390, 10, 311, 21));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        Grafica_3->setWidget(scrollAreaWidgetContents);
        caracteristicasCuerpos = new QScrollArea(centralwidget);
        caracteristicasCuerpos->setObjectName(QString::fromUtf8("caracteristicasCuerpos"));
        caracteristicasCuerpos->setGeometry(QRect(750, 20, 321, 241));
        caracteristicasCuerpos->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 319, 239));
        nuevoCuerpo = new QPushButton(scrollAreaWidgetContents_2);
        nuevoCuerpo->setObjectName(QString::fromUtf8("nuevoCuerpo"));
        nuevoCuerpo->setGeometry(QRect(30, 200, 121, 23));
        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 121, 23));
        posicionInicialX_label = new QLabel(scrollAreaWidgetContents_2);
        posicionInicialX_label->setObjectName(QString::fromUtf8("posicionInicialX_label"));
        posicionInicialX_label->setGeometry(QRect(30, 60, 111, 21));
        posicionInicialY_label = new QLabel(scrollAreaWidgetContents_2);
        posicionInicialY_label->setObjectName(QString::fromUtf8("posicionInicialY_label"));
        posicionInicialY_label->setGeometry(QRect(30, 80, 111, 21));
        velocidadInicialX_label = new QLabel(scrollAreaWidgetContents_2);
        velocidadInicialX_label->setObjectName(QString::fromUtf8("velocidadInicialX_label"));
        velocidadInicialX_label->setGeometry(QRect(30, 120, 111, 21));
        velocidadInicialY_label = new QLabel(scrollAreaWidgetContents_2);
        velocidadInicialY_label->setObjectName(QString::fromUtf8("velocidadInicialY_label"));
        velocidadInicialY_label->setGeometry(QRect(30, 140, 111, 21));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 171, 21));
        posicionInicialX_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        posicionInicialX_C->setObjectName(QString::fromUtf8("posicionInicialX_C"));
        posicionInicialX_C->setGeometry(QRect(170, 60, 121, 21));
        posicionInicialX_C->setMinimum(-80000.000000000000000);
        posicionInicialX_C->setMaximum(80000.000000000000000);
        posicionInicialY_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        posicionInicialY_C->setObjectName(QString::fromUtf8("posicionInicialY_C"));
        posicionInicialY_C->setGeometry(QRect(170, 80, 121, 21));
        posicionInicialY_C->setMinimum(-80000.000000000000000);
        posicionInicialY_C->setMaximum(80000.000000000000000);
        velocidadInicialX_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialX_C->setObjectName(QString::fromUtf8("velocidadInicialX_C"));
        velocidadInicialX_C->setGeometry(QRect(170, 120, 121, 21));
        velocidadInicialX_C->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        velocidadInicialX_C->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        velocidadInicialY_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialY_C->setObjectName(QString::fromUtf8("velocidadInicialY_C"));
        velocidadInicialY_C->setGeometry(QRect(170, 140, 121, 21));
        velocidadInicialY_C->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        velocidadInicialY_C->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        masa_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        masa_C->setObjectName(QString::fromUtf8("masa_C"));
        masa_C->setGeometry(QRect(170, 100, 121, 21));
        masa_C->setMinimum(0.000000000000000);
        masa_C->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        radio_label = new QLabel(scrollAreaWidgetContents_2);
        radio_label->setObjectName(QString::fromUtf8("radio_label"));
        radio_label->setGeometry(QRect(30, 100, 111, 20));
        line_14 = new QFrame(scrollAreaWidgetContents_2);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(20, 30, 281, 21));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        nombre_C = new QLineEdit(scrollAreaWidgetContents_2);
        nombre_C->setObjectName(QString::fromUtf8("nombre_C"));
        nombre_C->setGeometry(QRect(170, 160, 121, 20));
        nombre = new QLabel(scrollAreaWidgetContents_2);
        nombre->setObjectName(QString::fromUtf8("nombre"));
        nombre->setGeometry(QRect(30, 160, 111, 21));
        caracteristicasCuerpos->setWidget(scrollAreaWidgetContents_2);
        seguimientoCuerpos = new QScrollArea(centralwidget);
        seguimientoCuerpos->setObjectName(QString::fromUtf8("seguimientoCuerpos"));
        seguimientoCuerpos->setGeometry(QRect(750, 280, 321, 271));
        seguimientoCuerpos->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 319, 269));
        label_2 = new QLabel(scrollAreaWidgetContents_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 241, 20));
        line = new QFrame(scrollAreaWidgetContents_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 30, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        listWidget = new QListWidget(scrollAreaWidgetContents_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(55, 60, 211, 192));
        seguimientoCuerpos->setWidget(scrollAreaWidgetContents_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1091, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Simulador", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "GR\303\201FICA", nullptr));
        nuevoCuerpo->setText(QApplication::translate("MainWindow", " A\303\261adir planeta", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Iniciar simulaci\303\263n", nullptr));
        posicionInicialX_label->setText(QApplication::translate("MainWindow", "Posici\303\263n inicial en X:", nullptr));
        posicionInicialY_label->setText(QApplication::translate("MainWindow", "Posicion inicial en Y:", nullptr));
        velocidadInicialX_label->setText(QApplication::translate("MainWindow", "Velocidad inicial en X:", nullptr));
        velocidadInicialY_label->setText(QApplication::translate("MainWindow", "Velocidad inicial en Y:", nullptr));
        label->setText(QApplication::translate("MainWindow", "DATOS PARA UN NUEVO PLANETA", nullptr));
        radio_label->setText(QApplication::translate("MainWindow", "Masa:", nullptr));
        nombre->setText(QApplication::translate("MainWindow", "Nombre del planeta:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "   SEGUIMIENTO DE LOS PLANETAS EN ORBITA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
