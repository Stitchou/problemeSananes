#ifndef MYTIME_H
#define MYTIME_H

#include <QObject>

class Mytime : public QObject
{
    Q_OBJECT
public:
    explicit Mytime(QObject *parent = 0);
    ~Mytime();

    QString toString();
    void addTime(double tp);
    double getTotal() const;
    void setTotal(double value);

private:
    int d,h,m;
    double total;
signals:

public slots:
};

#endif // MYTIME_H
