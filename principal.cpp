#include "principal.h"
#include "ui_principal.h"
#include "agregar.h"
#include "tarea.h"
#include <QDebug>


principal::principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::principal)
{
    ui->setupUi(this);
    // Configurar cabecera de la tabla
    QStringList cabecera = {"NUMERO", "NOMBRE", "TIPO", "FECHA"};
    ui->outDetalle->setColumnCount(4);
    ui->outDetalle->setHorizontalHeaderLabels(cabecera);
    agregar i;
    imprimirtareas=i.m_tareas;
    int fila=ui->outDetalle->rowCount();
        ui->outDetalle->insertRow(fila);
        //ui->outDetalle->setItem(fila,0,new QTableWidgetItem(QString::number(imprimirtareas.at(0)->numero())));
        /*ui->outDetalle->setItem(fila,1,new QTableWidgetItem(l->nombre(nombre)));
        ui->outDetalle->setItem(fila,2,new QTableWidgetItem(QString::number(l->precio(),'f',2)));
        ui->outDetalle->setItem(fila,3,new QTableWidgetItem(QString::number(subtotal,'f',2)));*/
}

principal::~principal()
{
    delete ui;
}

void principal::on_actionSALIR_triggered()
{
    QApplication::quit();
}

void principal::on_actionACERCA_DE_triggered()
{
    // Crear un objeto de la ventana que queremos invocar
    acerca *dialogo = new acerca(this);
    // Enviar parámetro a la ventana
    dialogo->setVersion(Examen);
    // Mostrar la ventana (diálogo) MODAL
    dialogo->exec();
    // Obtener datos de la ventana
    qDebug() << dialogo->valor();

}


void principal::on_actionAGREGAR_TAREA_triggered()
{
agregar *pantalla = new agregar(this);
pantalla->setWindowModality(Qt::ApplicationModal);
pantalla->show();
}

