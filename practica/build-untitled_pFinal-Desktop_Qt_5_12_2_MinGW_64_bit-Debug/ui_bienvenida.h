/********************************************************************************
** Form generated from reading UI file 'bienvenida.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIENVENIDA_H
#define UI_BIENVENIDA_H

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

class Ui_Bienvenida
{
public:
    QWidget *centralwidget;
    QLabel *espacioBienvenida;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QDoubleSpinBox *masaSol_;
    QLabel *label;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Bienvenida)
    {
        if (Bienvenida->objectName().isEmpty())
            Bienvenida->setObjectName(QString::fromUtf8("Bienvenida"));
        Bienvenida->resize(781, 324);
        Bienvenida->setMinimumSize(QSize(781, 324));
        Bienvenida->setMaximumSize(QSize(781, 324));
        centralwidget = new QWidget(Bienvenida);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        espacioBienvenida = new QLabel(centralwidget);
        espacioBienvenida->setObjectName(QString::fromUtf8("espacioBienvenida"));
        espacioBienvenida->setGeometry(QRect(20, 10, 231, 261));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(270, 10, 491, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 269));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 240, 161, 23));
        masaSol_ = new QDoubleSpinBox(scrollAreaWidgetContents);
        masaSol_->setObjectName(QString::fromUtf8("masaSol_"));
        masaSol_->setGeometry(QRect(190, 210, 101, 22));
        masaSol_->setMaximum(99999999999999999209038626283633850822756121694230455365568299008.000000000000000);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 210, 71, 21));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 471, 192));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Bienvenida->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Bienvenida);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 781, 22));
        Bienvenida->setMenuBar(menubar);
        statusbar = new QStatusBar(Bienvenida);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Bienvenida->setStatusBar(statusbar);

        retranslateUi(Bienvenida);

        QMetaObject::connectSlotsByName(Bienvenida);
    } // setupUi

    void retranslateUi(QMainWindow *Bienvenida)
    {
        Bienvenida->setWindowTitle(QApplication::translate("Bienvenida", "Bienvenida", nullptr));
        espacioBienvenida->setText(QApplication::translate("Bienvenida", "SISTEMA SOLAR", nullptr));
        pushButton->setText(QApplication::translate("Bienvenida", "Agregar sol", nullptr));
        label->setText(QApplication::translate("Bienvenida", "Masa del sol:", nullptr));
        textBrowser->setHtml(QApplication::translate("Bienvenida", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic; color:#8394ff;\">AS\303\215 FUNCIONA \303\211STE SIMULADOR:</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS She"
                        "ll Dlg 2'; font-size:10pt; font-style:italic; color:#8394ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\303\211ste simulador consiste en representar las trayector\303\255as que seguir\303\255an los planetas con respecto a un cuerpo central (el cual es el sol), sin ser afectados por los otros planetas orbitando en torno a \303\251l.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#260aff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">Para iniciar con el proceso se debe elegir la masa de la cual ser\303\241 el sol. Hay que tener en cuenta que el sol debe ser el "
                        "cuerpo con mayor masa.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#260aff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">Al dar </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#260aff;\">click </span><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">al bot\303\263n &quot;Agregar sol&quot;, se procede a crear y a\303\261adir planetas a la gr\303\241fica, pero la simulaci\303\263n no comienza sino hasta que se da </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#260aff;\">click </span><span style=\" font-family:'MS Shell Dlg 2'; color:#260aff;\">al bot\303\263n &quot;Iniciar simulaci\303\263n&quot; no se permitir\303\241 agregar m\303\241s plan"
                        "etas.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bienvenida: public Ui_Bienvenida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIENVENIDA_H
