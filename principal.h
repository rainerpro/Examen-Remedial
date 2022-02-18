#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "acerca.h"
#include "tarea.h"
#include "agregar.h"

#define Examen "1.0"

QT_BEGIN_NAMESPACE
namespace Ui { class principal; }
QT_END_NAMESPACE

class principal : public QMainWindow
{
    Q_OBJECT

public:
    principal(QWidget *parent = nullptr);
    ~principal();
QList <tarea*> imprimirtareas;
private slots:
    void on_actionSALIR_triggered();
    void on_actionACERCA_DE_triggered();

    void on_actionAGREGAR_TAREA_triggered();

private:
    Ui::principal *ui;
    QString m_detalles;
};
#endif // PRINCIPAL_H
