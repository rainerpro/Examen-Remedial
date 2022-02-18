#ifndef TAREA_H
#define TAREA_H

#include <QObject>
enum class Prioridad
{
    Alto,
    Medio,
    Bajo
};

class tarea : public QObject
{
    Q_OBJECT
public:
    explicit tarea(QObject *parent = nullptr);
    tarea(int numero, const QString &nombre, const QString &tipo, const QString &fecha, bool finalizada);

    int numero() const;
    void setNumero(int newNumero);
    const QString &nombre() const;
    void setNombre(const QString &newNombre);
    const QString &tipo() const;
    void setTipo(const QString &newTipo);
    const QString &fecha() const;
    void setFecha(const QString &newFecha);
    bool finalizada() const;
    void setFinalizada(bool newFinalizada);

signals:
private:
    int m_numero;
    QString m_nombre,m_tipo, m_fecha;
    bool m_finalizada;


};

#endif // TAREA_H
