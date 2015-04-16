#include "configregate.h"
#include "ui_configregate.h"

ConfigRegate::ConfigRegate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigRegate)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator( new QIntValidator(0, 100, this) );
}

ConfigRegate::~ConfigRegate()
{
    delete ui;
}

void ConfigRegate::on_buttonBox_accepted()
{
    emit envoyerEtapes(ui->lineEdit->text());
}
