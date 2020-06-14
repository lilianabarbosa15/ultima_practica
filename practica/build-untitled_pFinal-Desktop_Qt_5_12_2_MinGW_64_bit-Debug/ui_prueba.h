/********************************************************************************
** Form generated from reading UI file 'prueba.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRUEBA_H
#define UI_PRUEBA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prueba
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *prueba)
    {
        if (prueba->objectName().isEmpty())
            prueba->setObjectName(QString::fromUtf8("prueba"));
        prueba->resize(800, 600);
        menubar = new QMenuBar(prueba);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        prueba->setMenuBar(menubar);
        centralwidget = new QWidget(prueba);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        prueba->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(prueba);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        prueba->setStatusBar(statusbar);

        retranslateUi(prueba);

        QMetaObject::connectSlotsByName(prueba);
    } // setupUi

    void retranslateUi(QMainWindow *prueba)
    {
        prueba->setWindowTitle(QApplication::translate("prueba", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prueba: public Ui_prueba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRUEBA_H
