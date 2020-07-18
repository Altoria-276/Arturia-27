#include "mainwindow.h"
#include<QApplication>
#include<QStyleFactory>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("fusion"));
    a.setWindowIcon(QIcon(":/image/cal.ico"));
    MainWindow w;
    w.show();
    return a.exec();
}
