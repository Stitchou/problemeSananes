#include "regate.h"
#include "ui_regate.h"
#include "dialog.h"
#include <QDebug>

Regate::Regate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Regate)
{
    ui->setupUi(this);
    nbEtapes = 0;
    userList = new QList<Utilisateur*>;
    mydialog = new Dialog;
    connect(mydialog,SIGNAL(envoyerTemps(int,QString)),this,SLOT(updateTime(int,QString)));

    ui->tableWidget->insertColumn(0);
    ui->tableWidget->insertColumn(1);
    ui->tableWidget->insertColumn(2);
    ui->tableWidget->insertColumn(3);
    ui->tableWidget->setColumnWidth(0,140);
    ui->tableWidget->setColumnWidth(1,100);
    ui->tableWidget->setColumnWidth(2,100);
    ui->tableWidget->setColumnWidth(3,100);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Participant"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Numéro voilier"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Coef"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Temps"));
}

Regate::~Regate()
{
    delete ui;
}

void Regate::showEvent(QShowEvent *e)
{
    tour = 0;
    Q_UNUSED(e);
    updateAffichage();
}

int Regate::getNbEtapes() const
{
    return nbEtapes;
}

void Regate::setNbEtapes(int value)
{
    nbEtapes = value;
}
QList<Utilisateur *> *Regate::getUserList() const
{
    return userList;
}

void Regate::setUserList(QList<Utilisateur *> *value)
{
    userList = value;
}

void Regate::activeSuivant()
{
    if(tour==nbEtapes)
        ui->pushButton->setEnabled(false);
    else
        ui->pushButton->setEnabled(true);
}

void Regate::updateTime(int index, QString tps)
{
    userList->at(index)->duree->addTime(tps.toInt()*userList->at(index)->getCoefficient());
}

void Regate::updateAffichage()
{

    list.clear();

    for(int i=0; i< userList->size(); i++)
        list.append((userList->at(i)));

    qSort( list.begin(), list.end(),  PtrLess<Utilisateur>() );

    for(int i=0; i<= ui->tableWidget->rowCount()+1; i++)
    {
        qDebug () << ui->tableWidget->rowCount();
        ui->tableWidget->removeRow(0);
    }

    for(int i=0; i< userList->size(); i++)
    {
        ui->tableWidget->insertRow(i);

        QTableWidgetItem *nom = new QTableWidgetItem;
        nom->setText(list.at(i)->getNom());
        ui->tableWidget->setItem(i,0,nom);

        QTableWidgetItem *nom2 = new QTableWidgetItem;
        nom2->setText(QString::number(list.at(i)->getNum()));
        ui->tableWidget->setItem(i,1,nom2);

        QTableWidgetItem *nom3 = new QTableWidgetItem;
        nom3->setText(QString::number(list.at(i)->getCoefficient()));
        ui->tableWidget->setItem(i,2,nom3);

        QTableWidgetItem *nom4 = new QTableWidgetItem;
        nom4->setText(list.at(i)->duree->toString());
        ui->tableWidget->setItem(i,3,nom4);
    }
    ui->label->setText(" Etape "+QString::number(tour)+"/"+QString::number(nbEtapes));

    activeSuivant();
}



void Regate::on_pushButton_clicked()
{
    mydialog->setUserList(userList);
    mydialog->exec();
    tour++;
    updateAffichage();
}
