/********************************************************************************
** Form generated from reading UI file 'regate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGATE_H
#define UI_REGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Regate
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *Regate)
    {
        if (Regate->objectName().isEmpty())
            Regate->setObjectName(QStringLiteral("Regate"));
        Regate->resize(514, 385);
        pushButton = new QPushButton(Regate);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 350, 91, 23));
        tableWidget = new QTableWidget(Regate);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 491, 281));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setDefaultSectionSize(160);
        label = new QLabel(Regate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 491, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Regate);

        QMetaObject::connectSlotsByName(Regate);
    } // setupUi

    void retranslateUi(QDialog *Regate)
    {
        Regate->setWindowTitle(QApplication::translate("Regate", "Dialog", 0));
        pushButton->setText(QApplication::translate("Regate", "Etape suivante", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Regate: public Ui_Regate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGATE_H
