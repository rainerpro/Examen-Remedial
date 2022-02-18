#include "agregartarea.h"
#include "ui_agregartarea.h"
#include "principal.h"
#include "principal.cpp"

#include <QDebug>

agregartarea::agregartarea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::agregartarea)
{
    ui->setupUi(this);
    ui->inTipo->addItem("Colegio");
    ui->inTipo->addItem("Universidad");
}

agregartarea::~agregartarea()
{
    delete ui;
}

void agregartarea::on_btnAgregar_released()
{
    int numero=ui->inNumero->text().toInt();
    QString nombre=ui->inNombreTarea->text();
   QString tipo=ui->inTipo->currentText();
   QString fecha=ui->inFecha->text();
    Prioridad prioridad;
    if(ui->btAlta->isChecked()){
        prioridad = Prioridad::Alto;
    }else if (ui->btMedia->isChecked()){
        prioridad = Prioridad::Medio;
    }else{
        prioridad = Prioridad::Bajo;
    }

    m_tarea=new tarea(numero,nombre,tipo,fecha,false);
    qDebug()<<m_tarea->numero();
    m_tareas.push_back(m_tarea);
agregartarea w;
w.close();
    // Validar que no se agregen productos con 0 cantidad
   /* int numero=ui->inNumero->value();
    if(numero==0){
        return;
    }
    // Obtener los datos de la GUI
    int i=ui->inTipo->currentIndex();
    lista *l=m_lista.at(i);
*/
/*    // Agregar los datos a la tabla
    int fila=ui->outDetalle->rowCount();
    ui->outDetalle->insertRow(fila);
    ui->outDetalle->setItem(fila,0,new QTableWidgetItem(QString::number(numero)));
    ui->outDetalle->setItem(fila,1,new QTableWidgetItem(l->nombre(nombre)));
    ui->outDetalle->setItem(fila,2,new QTableWidgetItem(QString::number(l->precio(),'f',2)));
    ui->outDetalle->setItem(fila,3,new QTableWidgetItem(QString::number(subtotal,'f',2)));
*/
}

void agregartarea::cargarProductos()
{
    //crear productos quemados en el codigo
  /*  tipo.append(new lista("COLEGIO"));
    tipo.append(new lista("UNIVERSIDAD"));
*/
}
