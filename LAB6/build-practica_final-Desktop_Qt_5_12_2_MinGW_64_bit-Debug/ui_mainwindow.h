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
    QLabel *imagenSistemaSolar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QLabel *masaSol;
    QPushButton *simulacionNueva;
    QPushButton *simulacionGuardada;
    QDoubleSpinBox *masaSol_;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(781, 350);
        MainWindow->setMinimumSize(QSize(781, 350));
        MainWindow->setMaximumSize(QSize(781, 350));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        imagenSistemaSolar = new QLabel(centralwidget);
        imagenSistemaSolar->setObjectName(QString::fromUtf8("imagenSistemaSolar"));
        imagenSistemaSolar->setGeometry(QRect(20, 10, 231, 291));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(270, 10, 491, 301));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 299));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 471, 211));
        masaSol = new QLabel(scrollAreaWidgetContents);
        masaSol->setObjectName(QString::fromUtf8("masaSol"));
        masaSol->setGeometry(QRect(50, 230, 71, 21));
        simulacionNueva = new QPushButton(scrollAreaWidgetContents);
        simulacionNueva->setObjectName(QString::fromUtf8("simulacionNueva"));
        simulacionNueva->setGeometry(QRect(50, 260, 181, 23));
        simulacionGuardada = new QPushButton(scrollAreaWidgetContents);
        simulacionGuardada->setObjectName(QString::fromUtf8("simulacionGuardada"));
        simulacionGuardada->setGeometry(QRect(280, 230, 161, 51));
        masaSol_ = new QDoubleSpinBox(scrollAreaWidgetContents);
        masaSol_->setObjectName(QString::fromUtf8("masaSol_"));
        masaSol_->setGeometry(QRect(130, 230, 101, 22));
        masaSol_->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 781, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        imagenSistemaSolar->setText(QApplication::translate("MainWindow", "SISTEMA SOLAR", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic; color:#8394ff;\">AS\303\215 FUNCIONA \303\211STE SIMULADOR:</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-s"
                        "ize:10pt; font-style:italic; color:#8394ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\303\211ste simulador consiste en representar las trayector\303\255as que seguir\303\255an los planetas con respecto a un cuerpo central (el cual es el sol), sin ser afectados por los otros planetas orbitando en torno a \303\251l.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#260aff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">Para iniciar con el proceso se debe elegir la masa de la cual ser\303\241 el sol. Hay que tener en cuenta que el sol debe ser el cuerpo con mayor "
                        "masa.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#260aff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">Al dar </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#260aff;\">click </span><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">al bot\303\263n &quot;Agregar sol&quot;, se procede a crear y a\303\261adir planetas a la gr\303\241fica, pero la simulaci\303\263n no comienza sino hasta que se da </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#260aff;\">click </span><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">al bot\303\263n &quot;Iniciar simulaci\303\263n&quot; no se permitir\303\241 agregar m\303\241s planetas.</span></p><"
                        "/body></html>", nullptr));
        masaSol->setText(QApplication::translate("MainWindow", "Masa del sol:", nullptr));
        simulacionNueva->setText(QApplication::translate("MainWindow", "Nueva simulaci\303\263n", nullptr));
        simulacionGuardada->setText(QApplication::translate("MainWindow", "Simulaci\303\263n guardada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
