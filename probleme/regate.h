#ifndef REGATE_H
#define REGATE_H
#include "utilisateur.h"
#include <QDialog>

class Utilisateur;
class Dialog;

namespace Ui {
class Regate;
}

class Regate : public QDialog
{
    Q_OBJECT

public:
    explicit Regate(QWidget *parent = 0);
    ~Regate();
    void showEvent(QShowEvent *e);

    int getNbEtapes() const;
    void setNbEtapes(int value);

    QList<Utilisateur *> *getUserList() const;
    void setUserList(QList<Utilisateur *> *value);

    template <typename T>
    struct PtrLess
    {
      bool operator()(const Utilisateur* a, const Utilisateur* b) const
      {
          if( a && b)
            return (a->duree->getTotal()) < (b->duree->getTotal());
          return false;
      }
    };

private slots:
    void on_pushButton_clicked();
    void updateTime(int index, QString tps);

private:
    Ui::Regate *ui;
    int nbEtapes;
    int tour;
    QList <Utilisateur*> *userList;
    Dialog * mydialog;
    QList <Utilisateur*> list ;
    void activeSuivant();


    void updateAffichage();


};

#endif // REGATE_H
