#include "agregart.h"
#include "ui_agregart.h"

agregart::agregart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregart)
{
    ui->setupUi(this);
    ui->inTipo->addItem("Colegio");
    ui->inTipo->addItem("Universidad");
}

agregart::~agregart()
{
    delete ui;
}

void agregart::on_buttonBox_accepted()
{
   accept();
}


void agregart::on_buttonBox_rejected()
{
    reject();
}
QString agregart::nombre() const
{
    return ui->inNombreTarea->text();
}
QString agregart::tipo() const{
  //return ui->inTipo->();
}
QString agregart::fecha() const{
    return ui->inFecha->text();
}
QString agregart::prioridad() const{

}
QString agregart::alto() const{
    return ui->btAlta->text();
}
QString agregart::bajo() const{
    return ui->btBaja->text();
}
QString agregart::medio() const{
    return ui->btMedia->text();
}
int agregart::numero() const{
    //return ui->inNumero->tex();

}
bool agregart::finalizado() const{
    //return ;

}

