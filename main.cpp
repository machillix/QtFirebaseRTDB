#include "mainwindow.h"
#include "firebasehandler.h"
#include <QApplication>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    FireBaseHandler fireBaseHandler;
    w.show();
    return a.exec();
}
