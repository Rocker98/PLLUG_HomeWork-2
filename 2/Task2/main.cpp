#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w::QPushButton *butt_cls =new QPushButton;
//    butt->setText("Close");
//    QPushButton *butt_geometry =new QPushButton;
//    butt_close->setText("Close");
//    butt_geometry->setText("Change geometry");


//    QObject::connect(butt_cls,SIGNAL(clicked()),w,SLOT(close()),Qt::AutoConnection);



    w.show();

    return a.exec();
}
