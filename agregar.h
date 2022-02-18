#ifndef AGREGAR_H
#define AGREGAR_H

#include <QMainWindow>
#include <QWidget>
#include "principal.h"
#include "tarea.h"

namespace Ui {
class agregar;
}

class agregar : public QMainWindow
{
    Q_OBJECT

public:
    explicit agregar(QWidget *parent = nullptr);
    ~agregar();
    QList<tarea*> m_tareas;
private slots:


    void on_btnAgregar_released();


private:
    Ui::agregar *ui;
    tarea *m_tarea;
    //principal* principal;
    void cargarProductos();
};

#endif // AGREGAR_H
