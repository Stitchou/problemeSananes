#include "mytime.h"

Mytime::Mytime(QObject *parent) : QObject(parent)
{
    total=d=h=m=0;
}

Mytime::~Mytime()
{

}

QString Mytime::toString()
{
    d = (total/60)/24;
    h = total/60;
    if(h >25)
        h -= 24;
    m = (int) total%60;

    QString retour = QString::number(d)+"d "+QString::number(h)+"h "+QString::number(m)+"m";
    return retour;
}

void Mytime::addTime(double tp)
{
    total+=tp;
}
double Mytime::getTotal() const
{
    return total;
}

void Mytime::setTotal(double value)
{
    total = value;
}


