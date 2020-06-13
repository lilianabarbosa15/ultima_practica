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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QScrollArea *Grafica;
    QWidget *scrollAreaWidgetContents;
    QGraphicsView *Grafica_2;
    QLabel *label_8;
    QFrame *line_6;
    QFrame *line_7;
    QScrollArea *caracteristicasCuerpos;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *nuevoCuerpo;
    QPushButton *pushButton;
    QLabel *posicionInicialX_label;
    QLabel *posicionInicialY_label;
    QLabel *masa_label;
    QLabel *velocidadInicialX_label;
    QLabel *velocidadInicialY_label;
    QLabel *label;
    QDoubleSpinBox *posicionInicialX_C;
    QDoubleSpinBox *posicionInicialY_C;
    QDoubleSpinBox *masa_C;
    QDoubleSpinBox *velocidadInicialX_C;
    QDoubleSpinBox *velocidadInicialY_C;
    QDoubleSpinBox *radio_C;
    QLabel *radio_label;
    QFrame *line_14;
    QScrollArea *seguimientoCuerpos;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_2;
    QFrame *line;
    QTextBrowser *datosVelocidadX;
    QTextBrowser *datosNombres;
    QLabel *label_3;
    QTextBrowser *datosPosicionX;
    QLabel *label_4;
    QFrame *line_2;
    QTextBrowser *datosAceleracionX;
    QLabel *label_5;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *datosPosicionY;
    QTextBrowser *datosAceleracionY;
    QTextBrowser *datosVelocidadY;
    QFrame *line_12;
    QLabel *label_9;
    QFrame *line_13;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1301, 603);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafica = new QScrollArea(centralwidget);
        Grafica->setObjectName(QString::fromUtf8("Grafica"));
        Grafica->setGeometry(QRect(20, 20, 711, 531));
        Grafica->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 709, 529));
        Grafica_2 = new QGraphicsView(scrollAreaWidgetContents);
        Grafica_2->setObjectName(QString::fromUtf8("Grafica_2"));
        Grafica_2->setGeometry(QRect(15, 40, 681, 481));
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
        Grafica->setWidget(scrollAreaWidgetContents);
        caracteristicasCuerpos = new QScrollArea(centralwidget);
        caracteristicasCuerpos->setObjectName(QString::fromUtf8("caracteristicasCuerpos"));
        caracteristicasCuerpos->setGeometry(QRect(850, 20, 321, 241));
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
        masa_label = new QLabel(scrollAreaWidgetContents_2);
        masa_label->setObjectName(QString::fromUtf8("masa_label"));
        masa_label->setGeometry(QRect(30, 100, 111, 21));
        velocidadInicialX_label = new QLabel(scrollAreaWidgetContents_2);
        velocidadInicialX_label->setObjectName(QString::fromUtf8("velocidadInicialX_label"));
        velocidadInicialX_label->setGeometry(QRect(30, 140, 111, 21));
        velocidadInicialY_label = new QLabel(scrollAreaWidgetContents_2);
        velocidadInicialY_label->setObjectName(QString::fromUtf8("velocidadInicialY_label"));
        velocidadInicialY_label->setGeometry(QRect(30, 160, 111, 21));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 171, 20));
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
        masa_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        masa_C->setObjectName(QString::fromUtf8("masa_C"));
        masa_C->setGeometry(QRect(170, 100, 121, 21));
        masa_C->setMaximum(9999999999999999827367757839185598317239782875580932278577147150336.000000000000000);
        velocidadInicialX_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialX_C->setObjectName(QString::fromUtf8("velocidadInicialX_C"));
        velocidadInicialX_C->setGeometry(QRect(170, 140, 121, 21));
        velocidadInicialX_C->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        velocidadInicialX_C->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        velocidadInicialY_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialY_C->setObjectName(QString::fromUtf8("velocidadInicialY_C"));
        velocidadInicialY_C->setGeometry(QRect(170, 160, 121, 21));
        velocidadInicialY_C->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        velocidadInicialY_C->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        radio_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        radio_C->setObjectName(QString::fromUtf8("radio_C"));
        radio_C->setGeometry(QRect(170, 120, 121, 21));
        radio_C->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        radio_C->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        radio_label = new QLabel(scrollAreaWidgetContents_2);
        radio_label->setObjectName(QString::fromUtf8("radio_label"));
        radio_label->setGeometry(QRect(30, 120, 111, 20));
        line_14 = new QFrame(scrollAreaWidgetContents_2);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(20, 30, 281, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        caracteristicasCuerpos->setWidget(scrollAreaWidgetContents_2);
        seguimientoCuerpos = new QScrollArea(centralwidget);
        seguimientoCuerpos->setObjectName(QString::fromUtf8("seguimientoCuerpos"));
        seguimientoCuerpos->setGeometry(QRect(740, 280, 541, 271));
        seguimientoCuerpos->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 539, 269));
        label_2 = new QLabel(scrollAreaWidgetContents_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 241, 20));
        line = new QFrame(scrollAreaWidgetContents_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 30, 521, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        datosVelocidadX = new QTextBrowser(scrollAreaWidgetContents_3);
        datosVelocidadX->setObjectName(QString::fromUtf8("datosVelocidadX"));
        datosVelocidadX->setGeometry(QRect(390, 70, 61, 192));
        datosNombres = new QTextBrowser(scrollAreaWidgetContents_3);
        datosNombres->setObjectName(QString::fromUtf8("datosNombres"));
        datosNombres->setGeometry(QRect(10, 70, 41, 192));
        label_3 = new QLabel(scrollAreaWidgetContents_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 41, 16));
        datosPosicionX = new QTextBrowser(scrollAreaWidgetContents_3);
        datosPosicionX->setObjectName(QString::fromUtf8("datosPosicionX"));
        datosPosicionX->setGeometry(QRect(70, 70, 61, 192));
        label_4 = new QLabel(scrollAreaWidgetContents_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 50, 61, 16));
        line_2 = new QFrame(scrollAreaWidgetContents_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(50, 50, 21, 211));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        datosAceleracionX = new QTextBrowser(scrollAreaWidgetContents_3);
        datosAceleracionX->setObjectName(QString::fromUtf8("datosAceleracionX"));
        datosAceleracionX->setGeometry(QRect(230, 70, 61, 192));
        label_5 = new QLabel(scrollAreaWidgetContents_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 50, 61, 16));
        line_3 = new QFrame(scrollAreaWidgetContents_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(130, 50, 21, 211));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(scrollAreaWidgetContents_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(200, 50, 41, 211));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(scrollAreaWidgetContents_3);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(280, 50, 41, 211));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(scrollAreaWidgetContents_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 50, 81, 16));
        label_7 = new QLabel(scrollAreaWidgetContents_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 50, 61, 20));
        datosPosicionY = new QTextBrowser(scrollAreaWidgetContents_3);
        datosPosicionY->setObjectName(QString::fromUtf8("datosPosicionY"));
        datosPosicionY->setGeometry(QRect(150, 70, 61, 192));
        datosAceleracionY = new QTextBrowser(scrollAreaWidgetContents_3);
        datosAceleracionY->setObjectName(QString::fromUtf8("datosAceleracionY"));
        datosAceleracionY->setGeometry(QRect(310, 70, 61, 192));
        datosVelocidadY = new QTextBrowser(scrollAreaWidgetContents_3);
        datosVelocidadY->setObjectName(QString::fromUtf8("datosVelocidadY"));
        datosVelocidadY->setGeometry(QRect(470, 70, 61, 192));
        line_12 = new QFrame(scrollAreaWidgetContents_3);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(360, 50, 41, 211));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(scrollAreaWidgetContents_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 50, 81, 16));
        line_13 = new QFrame(scrollAreaWidgetContents_3);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(440, 50, 41, 211));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(scrollAreaWidgetContents_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(470, 50, 61, 20));
        seguimientoCuerpos->setWidget(scrollAreaWidgetContents_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1301, 22));
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
        masa_label->setText(QApplication::translate("MainWindow", "Masa:", nullptr));
        velocidadInicialX_label->setText(QApplication::translate("MainWindow", "Velocidad inicial en X:", nullptr));
        velocidadInicialY_label->setText(QApplication::translate("MainWindow", "Velocidad inicial en Y:", nullptr));
        label->setText(QApplication::translate("MainWindow", "DATOS PARA UN NUEVO PLANETA", nullptr));
        radio_label->setText(QApplication::translate("MainWindow", "Radio:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "  SEGUIMIENTO DE LOS PLANETAS EN ORBITA", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "  Posici\303\263n X", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "  Posici\303\263n Y", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "  Aceleraci\303\263n X", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Velocidad X", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "  Aceleraci\303\263n Y", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Velocidad Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
