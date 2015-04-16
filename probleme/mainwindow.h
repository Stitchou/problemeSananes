#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Participant;
class Utilisateur;
class ConfigRegate;
class Regate;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Participant *participe;
    ConfigRegate *configuration;
    QList <Utilisateur*> *userList;
    Regate *jeu;

private slots:
    // slot mainwindows
    void ajouterParticipant();
    void configRegate();
    void lancerJeu();

    // slot config data
    void creerNouveauParticipant(QString nm, QString lg, QString pd,QString num);
    void configurerEtapes(QString nb);
};

#endif // MAINWINDOW_H
