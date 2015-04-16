#ifndef CONFIGREGATE_H
#define CONFIGREGATE_H

#include <QDialog>

namespace Ui {
class ConfigRegate;
}

class ConfigRegate : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigRegate(QWidget *parent = 0);
    ~ConfigRegate();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ConfigRegate *ui;

signals:
    void envoyerEtapes(QString nbEtapes);
};

#endif // CONFIGREGATE_H
