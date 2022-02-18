#include "acerca.h"
#include "ui_acerca.h"

acerca::acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acerca)
{
    ui->setupUi(this);
}

acerca::~acerca()
{
    delete ui;
}

void acerca::setVersion(const QString &newVersion)
{
    m_version = newVersion;
    this->ui->lblNombre->setText("Examen " + m_version);
}

int acerca::valor() const
{
    return m_valor;
}
