/********************************************************************************
** Form generated from reading UI file 'configregate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGREGATE_H
#define UI_CONFIGREGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ConfigRegate
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *ConfigRegate)
    {
        if (ConfigRegate->objectName().isEmpty())
            ConfigRegate->setObjectName(QStringLiteral("ConfigRegate"));
        ConfigRegate->resize(278, 103);
        buttonBox = new QDialogButtonBox(ConfigRegate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 60, 251, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(ConfigRegate);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 111, 20));
        label = new QLabel(ConfigRegate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 21));

        retranslateUi(ConfigRegate);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigRegate, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigRegate, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigRegate);
    } // setupUi

    void retranslateUi(QDialog *ConfigRegate)
    {
        ConfigRegate->setWindowTitle(QApplication::translate("ConfigRegate", "Dialog", 0));
        label->setText(QApplication::translate("ConfigRegate", "Nombre d'\303\251tapes", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigRegate: public Ui_ConfigRegate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGREGATE_H
