#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <QDialog>

namespace Ui {
class Participant;
}

class Participant : public QDialog
{
    Q_OBJECT

public:
    explicit Participant(QWidget *parent = 0);
    ~Participant();
    void showEvent(QShowEvent *e);
private:
    Ui::Participant *ui;

signals:
    void envoyerData(QString nom,QString longueur,QString poids,QString number);

private slots:
    void fermer();
    void valider();
};

#endif // PARTICIPANT_H
