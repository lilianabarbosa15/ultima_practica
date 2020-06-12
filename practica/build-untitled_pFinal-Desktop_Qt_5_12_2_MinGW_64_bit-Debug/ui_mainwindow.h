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
    QDoubleSpinBox *posicionInicialX;
    QDoubleSpinBox *posicionInicialY;
    QDoubleSpinBox *masa;
    QDoubleSpinBox *velocidadInicialX;
    QDoubleSpinBox *velocidadInicialY;
    QScrollArea *seguimientoCuerpos;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_2;
    QFrame *line;
    QTextBrowser *datosAceleracionY;
    QTextBrowser *datosCuerpos_2;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1207, 603);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafica = new QScrollArea(centralwidget);
        Grafica->setObjectName(QString::fromUtf8("Grafica"));
        Grafica->setGeometry(QRect(30, 20, 701, 531));
        Grafica->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 529));
        Grafica->setWidget(scrollAreaWidgetContents);
        caracteristicasCuerpos = new QScrollArea(centralwidget);
        caracteristicasCuerpos->setObjectName(QString::fromUtf8("caracteristicasCuerpos"));
        caracteristicasCuerpos->setGeometry(QRect(810, 20, 321, 241));
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
        posicionInicialX_label->setGeometry(QRect(30, 40, 111, 21));
        posicionInicialY_label = new QLabel(scrollAreaWidgetContents_2);
        posicionInicialY_label->setObjectName(QString::fromUtf8("posicionInicialY_label"));
        posicionInicialY_label->setGeometry(QRect(30, 70, 111, 21));
        masa_label = new QLabel(scrollAreaWidgetContents_2);
        masa_label->setObjectName(QString::fromUtf8("masa_label"));
        masa_label->setGeometry(QRect(30, 100, 111, 21));
        velocidadInicialX_label = new QLabel(scrollAreaWidgetContents_2);
        velocidadInicialX_label->setObjectName(QString::fromUtf8("velocidadInicialX_label"));
        velocidadInicialX_label->setGeometry(QRect(30, 130, 111, 21));
        velocidadInicialY_label = new QLabel(scrollAreaWidgetContents_2);
        velocidadInicialY_label->setObjectName(QString::fromUtf8("velocidadInicialY_label"));
        velocidadInicialY_label->setGeometry(QRect(30, 160, 111, 21));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(86, 10, 171, 20));
        posicionInicialX = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        posicionInicialX->setObjectName(QString::fromUtf8("posicionInicialX"));
        posicionInicialX->setGeometry(QRect(170, 40, 121, 21));
        posicionInicialX->setMinimum(-80000.000000000000000);
        posicionInicialX->setMaximum(80000.000000000000000);
        posicionInicialY = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        posicionInicialY->setObjectName(QString::fromUtf8("posicionInicialY"));
        posicionInicialY->setGeometry(QRect(170, 70, 121, 21));
        posicionInicialY->setMinimum(-80000.000000000000000);
        posicionInicialY->setMaximum(80000.000000000000000);
        masa = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setGeometry(QRect(170, 100, 121, 21));
        masa->setMaximum(9999999999999999827367757839185598317239782875580932278577147150336.000000000000000);
        velocidadInicialX = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialX->setObjectName(QString::fromUtf8("velocidadInicialX"));
        velocidadInicialX->setGeometry(QRect(170, 130, 121, 21));
        velocidadInicialX->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        velocidadInicialX->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        velocidadInicialY = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialY->setObjectName(QString::fromUtf8("velocidadInicialY"));
        velocidadInicialY->setGeometry(QRect(170, 160, 121, 21));
        velocidadInicialY->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        velocidadInicialY->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);
        caracteristicasCuerpos->setWidget(scrollAreaWidgetContents_2);
        seguimientoCuerpos = new QScrollArea(centralwidget);
        seguimientoCuerpos->setObjectName(QString::fromUtf8("seguimientoCuerpos"));
        seguimientoCuerpos->setGeometry(QRect(759, 279, 431, 271));
        seguimientoCuerpos->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 429, 269));
        label_2 = new QLabel(scrollAreaWidgetContents_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 10, 241, 20));
        line = new QFrame(scrollAreaWidgetContents_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 30, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        datosAceleracionY = new QTextBrowser(scrollAreaWidgetContents_3);
        datosAceleracionY->setObjectName(QString::fromUtf8("datosAceleracionY"));
        datosAceleracionY->setGeometry(QRect(330, 70, 81, 192));
        datosCuerpos_2 = new QTextBrowser(scrollAreaWidgetContents_3);
        datosCuerpos_2->setObjectName(QString::fromUtf8("datosCuerpos_2"));
        datosCuerpos_2->setGeometry(QRect(20, 70, 41, 192));
        label_3 = new QLabel(scrollAreaWidgetContents_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 41, 16));
        datosPosicionX = new QTextBrowser(scrollAreaWidgetContents_3);
        datosPosicionX->setObjectName(QString::fromUtf8("datosPosicionX"));
        datosPosicionX->setGeometry(QRect(80, 70, 61, 192));
        label_4 = new QLabel(scrollAreaWidgetContents_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 50, 51, 16));
        line_2 = new QFrame(scrollAreaWidgetContents_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(43, 50, 51, 211));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        datosAceleracionX = new QTextBrowser(scrollAreaWidgetContents_3);
        datosAceleracionX->setObjectName(QString::fromUtf8("datosAceleracionX"));
        datosAceleracionX->setGeometry(QRect(240, 70, 71, 192));
        label_5 = new QLabel(scrollAreaWidgetContents_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 50, 51, 16));
        line_3 = new QFrame(scrollAreaWidgetContents_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(133, 50, 31, 211));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(scrollAreaWidgetContents_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(210, 50, 41, 211));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(scrollAreaWidgetContents_3);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(310, 50, 31, 211));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(scrollAreaWidgetContents_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 50, 71, 16));
        label_7 = new QLabel(scrollAreaWidgetContents_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(340, 50, 71, 16));
        datosPosicionY = new QTextBrowser(scrollAreaWidgetContents_3);
        datosPosicionY->setObjectName(QString::fromUtf8("datosPosicionY"));
        datosPosicionY->setGeometry(QRect(160, 70, 61, 192));
        seguimientoCuerpos->setWidget(scrollAreaWidgetContents_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1207, 22));
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
        nuevoCuerpo->setText(QApplication::translate("MainWindow", " A\303\261adir planeta", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Iniciar simulaci\303\263n", nullptr));
        posicionInicialX_label->setText(QApplication::translate("MainWindow", "Posici\303\263n inicial en X:", nullptr));
        posicionInicialY_label->setText(QApplication::translate("MainWindow", "Posicion inicial en Y:", nullptr));
        masa_label->setText(QApplication::translate("MainWindow", "Masa:", nullptr));
        velocidadInicialX_label->setText(QApplication::translate("MainWindow", "Velocidad inicial en X:", nullptr));
        velocidadInicialY_label->setText(QApplication::translate("MainWindow", "Velocidad inicial en Y:", nullptr));
        label->setText(QApplication::translate("MainWindow", "DATOS PARA UN NUEVO PLANETA", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "  SEGUIMIENTO DE LOS PLANETAS EN ORBITA", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Posicion X", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Posicion Y", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Aceleraci\303\263n X", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Aceleraci\303\263n Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
