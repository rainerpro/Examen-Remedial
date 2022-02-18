#ifndef AGREGARTAREA_H
#define AGREGARTAREA_H

#include <QMainWindow>
#include <QWidget>
#include "principal.h"
#include "tarea.h"


namespace Ui {
class agregartarea;
}

class agregartarea : public QWidget
{
    Q_OBJECT

public:
    explicit agregartarea(QWidget *parent = nullptr);
    ~agregartarea();

    QList<tarea*> m_tareas;
private slots:


    void on_btnAgregar_released();


private:
    Ui::agregartarea *ui;

    tarea *m_tarea;
    void cargarProductos();
};

#endif // AGREGARTAREA_H
