#include "utilisateur.h"

Utilisateur::Utilisateur(QObject *parent) : QObject(parent)
{

}

Utilisateur::Utilisateur(QString name, QString longu, QString weight,QString nb)
{
    nom = name;
    longueur = longu.toInt();
    poids = weight.toInt();
    if(longu.toInt() >20)
        coefficient = 1 + ( (longu.toInt()-20)*0.05);
    else if( longu.toInt() < 20)
        coefficient = 1 - ( (20-longu.toInt())*0.05);
    else coefficient = 1;
    duree = new Mytime;
    num = nb.toInt();
}

Utilisateur::~Utilisateur()
{

}
QString Utilisateur::getNom() const
{
    return nom;
}

int Utilisateur::getLongueur() const
{
    return longueur;
}

int Utilisateur::getPoids() const
{
    return poids;
}

double Utilisateur::getCoefficient() const
{
    return coefficient;
}
int Utilisateur::getID() const
{
    return ID;
}

void Utilisateur::setID(int value)
{
    ID = value;
}
int Utilisateur::getNum() const
{
    return num;
}

void Utilisateur::setNum(int value)
{
    num = value;
}

bool Utilisateur::myLessThan(const Utilisateur *a, const Utilisateur *b )
{
   return ( a->duree->getTotal() < b->duree->getTotal());
}







