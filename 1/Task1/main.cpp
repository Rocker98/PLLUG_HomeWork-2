#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;

    QPushButton *butt =new QPushButton;
    butt->setText("Close");


    QObject::connect(butt,SIGNAL(clicked()),butt,SLOT(deleteLater()),Qt::AutoConnection);

    butt->show();

    return a.exec();
}
