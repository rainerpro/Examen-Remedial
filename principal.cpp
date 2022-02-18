#include "principal.h"
#include "ui_principal.h"
#include "agregart.h"
//#include "tarea.h"
#include <QDebug>


principal::principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::principal)
{
    ui->setupUi(this);
    setWindowTitle("AGREGAR TAREA");
    // Configurar cabecera de la tabla
    QStringList cabecera = {"NUMERO", "NOMBRE", "TIPO", "FECHA"};
    ui->outDetalle->setColumnCount(4);
    ui->outDetalle->setHorizontalHeaderLabels(cabecera);
    /*  agregar i;
    imprimirtareas=i.m_tareas;
   // setText();*/

}

principal::~principal()
{
    delete ui;
}
void principal::on_actionAGREGAR_TAREA_triggered()
{
    QString nombre, tipo,fecha;
    int res,numero,fila;
    agregart pd(this);
    pd.setWindowTitle("captura de tarea");
    res = pd.exec();
    if(res == QDialog::Rejected)
        return;
    numero= pd.numero();
    nombre = pd.nombre();
    tipo = pd.tipo();
    fecha = pd.fecha();
    ui->outDetalle->insertRow(ui->outDetalle->rowCount());
    fila=ui->outDetalle->rowCount() - 1;
    ui->outDetalle->setItem(fila, numero, new QTableWidgetItem(numero));
    /*ui->outDetalle->setItem(fila, nombre, new QTableWidgetItem(QString::text(NOMBRE)));
    ui->outDetalle->setItem(fila, fecha, new QTableWidgetItem(QString::number(FECHA)));
    ui->outDetalle->setItem(fila, tipo, new QTableWidgetItem(QString::number(TIPO)));*/
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





void principal::on_actionELIMINAR_triggered()
{

}


