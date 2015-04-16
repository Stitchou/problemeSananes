#include "participant.h"
#include "ui_participant.h"
#include <QMessageBox>

Participant::Participant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Participant)
{
    ui->setupUi(this);

    ui->longueur->setValidator( new QIntValidator(1, 1000, this) );
    ui->poids->setValidator( new QIntValidator(1, 10000, this) );

    connect(ui->annul,SIGNAL(clicked()),this,SLOT(fermer()));
    connect(ui->valid,SIGNAL(clicked()),this,SLOT(valider()));
}

Participant::~Participant()
{
    delete ui;
}

void Participant::showEvent(QShowEvent *e)
{
    Q_UNUSED(e);
    ui->nom->clear();
    ui->longueur->clear();
    ui->poids->clear();
    ui->numero->clear();
}

void Participant::fermer()
{
    this->done(QDialog::Rejected);
}

void Participant::valider()
{
    if(!ui->nom->text().isEmpty() && !ui->poids->text().isEmpty() && !ui->longueur->text().isEmpty())
    {
        emit envoyerData(ui->nom->text(),ui->longueur->text(),ui->poids->text(),ui->numero->text());
        this->done(QDialog::Accepted);
    }
    else
        QMessageBox::warning(0,"Erreur de saisie","Tous les champs doivent être remplie");
}
