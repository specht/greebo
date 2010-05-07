#include <QtCore>
#include <QtGui>
#include "MainWindow.h"


int main(int argc, char** argv)
{
    QApplication lk_App(argc, argv);
    k_MainWindow lk_MainWindow;
    lk_MainWindow.show();
    return lk_App.exec();
}
