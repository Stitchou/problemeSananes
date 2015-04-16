/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *config;
    QPushButton *adduser;
    QPushButton *start;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(225, 150);
        MainWindow->setMaximumSize(QSize(225, 150));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: rgb(202, 202, 202);"));
        config = new QPushButton(centralWidget);
        config->setObjectName(QStringLiteral("config"));
        config->setGeometry(QRect(60, 60, 101, 23));
        config->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"border: 1px solid black;\n"
"border-radius:10px;"));
        adduser = new QPushButton(centralWidget);
        adduser->setObjectName(QStringLiteral("adduser"));
        adduser->setGeometry(QRect(60, 10, 101, 23));
        adduser->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"border: 1px solid black;\n"
"border-radius:10px;"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(60, 110, 101, 23));
        start->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"border: 1px solid black;\n"
"border-radius:10px;"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        config->setText(QApplication::translate("MainWindow", "Configurer R\303\251gate", 0));
        adduser->setText(QApplication::translate("MainWindow", "Ajouter participant", 0));
        start->setText(QApplication::translate("MainWindow", "Lancer R\303\251gate", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
