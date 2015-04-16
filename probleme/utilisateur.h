#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include "mytime.h"
#include <QObject>

class Utilisateur : public QObject
{
    Q_OBJECT
public:
    explicit Utilisateur(QObject *parent = 0);
    Utilisateur(QString name, QString longu, QString weight, QString nb);
    ~Utilisateur();

    QString getNom() const;

    int getLongueur() const;

    int getPoids() const;

    double getCoefficient() const;

    int getID() const;
    void setID(int value);

    int getNum() const;
    void setNum(int value);

    Mytime * duree;
    bool myLessThan(const Utilisateur *a, const Utilisateur *b );

private:
    QString nom;
    int longueur;
    int poids;
    int num;
    double coefficient;
    int  ID;

signals:

public slots:
};

#endif // UTILISATEUR_H
