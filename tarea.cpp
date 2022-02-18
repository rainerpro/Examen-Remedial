#include "tarea.h"

tarea::tarea(QObject *parent) : QObject(parent)
{

}

int tarea::numero() const
{
    return m_numero;
}

void tarea::setNumero(int newNumero)
{
    m_numero = newNumero;
}

const QString &tarea::nombre() const
{
    return m_nombre;
}

void tarea::setNombre(const QString &newNombre)
{
    m_nombre = newNombre;
}

const QString &tarea::tipo() const
{
    return m_tipo;
}

void tarea::setTipo(const QString &newTipo)
{
    m_tipo = newTipo;
}

const QString &tarea::fecha() const
{
    return m_fecha;
}

void tarea::setFecha(const QString &newFecha)
{
    m_fecha = newFecha;
}

bool tarea::finalizada() const
{
    return m_finalizada;
}

void tarea::setFinalizada(bool newFinalizada)
{
    m_finalizada = newFinalizada;
}

tarea::tarea(int numero, const QString &nombre, const QString &tipo, const QString &fecha, bool finalizada) : m_numero(numero),
    m_nombre(nombre),
    m_tipo(tipo),
    m_fecha(fecha),
    m_finalizada(finalizada)
{}
