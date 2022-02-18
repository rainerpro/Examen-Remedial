#ifndef AGREGART_H
#define AGREGART_H

#include <QDialog>

namespace Ui {
class agregart;
}

class agregart : public QDialog
{
    Q_OBJECT

public:
    explicit agregart(QWidget *parent = nullptr);
    ~agregart();
    QString nombre() const;
    QString tipo() const;
    QString fecha() const;
    QString prioridad() const;
    QString alto() const;
    QString bajo() const;
    QString medio() const;
    int numero() const;
    bool finalizado() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::agregart *ui;
};

#endif // AGREGART_H
