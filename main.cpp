#include "principal.h"


#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
#include <QLocale>
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    principal w;
    w.show();
    return a.exec();
}
