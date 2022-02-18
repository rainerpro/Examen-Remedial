#include "principal.h"


#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
#include <QLocale>
#include <QDebug>
#include <QApplication>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
        QTranslator traducion;
        // Solicitando al usuario que seleccione un idioma
        QStringList idiomas;
        idiomas << "Portugues" << "Español";
        QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                                   "Idioma",
                                   "Seleccione un idioma",
                                   idiomas);
        // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
        if (idiomaSeleccionado == "Portugues"){
            traducion.load(":/portuges.qm");
        }else if (idiomaSeleccionado != "Español"){
            a.installTranslator(&traducion);
        }

    a.setStyle("fusion");
    principal w;
    w.show();
    return a.exec();
}
