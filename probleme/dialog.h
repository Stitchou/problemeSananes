#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class Utilisateur;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    QList<Utilisateur *> *getUserList() const;
    void setUserList(QList<Utilisateur *> *value);
    void showEvent(QShowEvent *e);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QList <Utilisateur*> *userList;

signals:
    void envoyerTemps(int idx,QString tp);
};

#endif // DIALOG_H
