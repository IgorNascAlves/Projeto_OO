#include "mainwindow.h"
#include <QApplication>
/*! \brief Programa de organização da semana apartir das disponibilidades dos professores
 *
 *
 *  Esse programa não soliona situações impossiveis, somente organiza situações possiveis apartir de um algortimo desenvolvindo pelo grupo
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
