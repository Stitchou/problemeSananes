#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "participant.h"
#include "utilisateur.h"
#include "configregate.h"
#include "regate.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    userList = new QList<Utilisateur*>;
    jeu = new Regate(this);

    // conect boutons principaux
    connect(ui->adduser,SIGNAL(clicked()),this,SLOT(ajouterParticipant()));
    connect(ui->config,SIGNAL(clicked()),this,SLOT(configRegate()));
    connect(ui->start,SIGNAL(clicked()),this,SLOT(lancerJeu()));

    participe = new Participant;
    connect(participe,SIGNAL(envoyerData(QString,QString,QString,QString)),this,SLOT(creerNouveauParticipant(QString,QString,QString,QString)));

    configuration = new ConfigRegate;
    connect(configuration,SIGNAL(envoyerEtapes(QString)),this,SLOT(configurerEtapes(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ajouterParticipant()
{
    participe->exec();
}

void MainWindow::configRegate()
{
    configuration->exec();
}

void MainWindow::lancerJeu()
{
    jeu->setUserList(userList);
    jeu->exec();
}

void MainWindow::creerNouveauParticipant(QString nm, QString lg, QString pd, QString num)
{
    Utilisateur *user = new  Utilisateur(nm,lg,pd,num);
    userList->append(user);
    user->setID(userList->size());

    QMessageBox::information(0,"Inscription","Participant : "
                             +user->getNom()+"\nNuméro d'inscription : "+QString::number(user->getID()));
}

void MainWindow::configurerEtapes(QString nb)
{
    jeu->setNbEtapes(nb.toInt());
}
