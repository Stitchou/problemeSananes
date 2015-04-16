/********************************************************************************
** Form generated from reading UI file 'participant.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICIPANT_H
#define UI_PARTICIPANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Participant
{
public:
    QGroupBox *groupBox;
    QLineEdit *nom;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLineEdit *longueur;
    QLineEdit *poids;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *numero;
    QLabel *label_4;
    QPushButton *valid;
    QPushButton *annul;

    void setupUi(QDialog *Participant)
    {
        if (Participant->objectName().isEmpty())
            Participant->setObjectName(QStringLiteral("Participant"));
        Participant->resize(619, 162);
        groupBox = new QGroupBox(Participant);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 101));
        groupBox->setAlignment(Qt::AlignCenter);
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(170, 30, 113, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 101, 16));
        groupBox_2 = new QGroupBox(Participant);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 10, 291, 141));
        groupBox_2->setAlignment(Qt::AlignCenter);
        longueur = new QLineEdit(groupBox_2);
        longueur->setObjectName(QStringLiteral("longueur"));
        longueur->setGeometry(QRect(150, 30, 113, 20));
        poids = new QLineEdit(groupBox_2);
        poids->setObjectName(QStringLiteral("poids"));
        poids->setGeometry(QRect(150, 70, 113, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 81, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 81, 16));
        numero = new QLineEdit(groupBox_2);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(150, 110, 113, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 81, 16));
        valid = new QPushButton(Participant);
        valid->setObjectName(QStringLiteral("valid"));
        valid->setGeometry(QRect(240, 120, 41, 23));
        valid->setLayoutDirection(Qt::LeftToRight);
        valid->setAutoFillBackground(false);
        valid->setStyleSheet(QStringLiteral("background-image: url(:/valider2.png);"));
        annul = new QPushButton(Participant);
        annul->setObjectName(QStringLiteral("annul"));
        annul->setGeometry(QRect(40, 120, 41, 23));
        annul->setStyleSheet(QStringLiteral("background-image: url(:/annuler2.png);"));

        retranslateUi(Participant);

        QMetaObject::connectSlotsByName(Participant);
    } // setupUi

    void retranslateUi(QDialog *Participant)
    {
        Participant->setWindowTitle(QApplication::translate("Participant", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Participant", "Participant", 0));
        label->setText(QApplication::translate("Participant", "Nom", 0));
        groupBox_2->setTitle(QApplication::translate("Participant", "Voilier", 0));
        label_2->setText(QApplication::translate("Participant", "Longueur", 0));
        label_3->setText(QApplication::translate("Participant", "Poids", 0));
        label_4->setText(QApplication::translate("Participant", "Num\303\251ro", 0));
        valid->setText(QString());
        annul->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Participant: public Ui_Participant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICIPANT_H
