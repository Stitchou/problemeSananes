#include "dialog.h"
#include "ui_dialog.h"
#include "utilisateur.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    userList = new QList<Utilisateur*>;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    emit envoyerTemps(ui->comboBox->currentIndex(),ui->lineEdit->text());
    if(ui->comboBox->currentIndex() == userList->size()-1)
    {
        this->close();
    }
    ui->comboBox->setCurrentIndex(ui->comboBox->currentIndex()+1);
    ui->lineEdit->clear();
}

QList<Utilisateur *> *Dialog::getUserList() const
{
    return userList;
}

void Dialog::setUserList(QList<Utilisateur *> *value)
{
    userList = value;
}

void Dialog::showEvent(QShowEvent *e)
{
    Q_UNUSED(e);
    ui->comboBox->clear();
    ui->lineEdit->clear();

    for(int i = 0; i < userList->size(); i++)
        ui->comboBox->addItem(userList->at(i)->getNom());
}

