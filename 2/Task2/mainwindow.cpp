#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <time.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(0));
    ui->setupUi(this);
    m_butt_close = new QPushButton("Close",this);
    m_butt_set_geometry = new QPushButton("Set geometry",this);
    m_butt_set_geometry->setGeometry(50,50,100,50);

QObject::connect(m_butt_close,SIGNAL(clicked(bool)),this,SLOT(close()));
QObject::connect(m_butt_set_geometry,SIGNAL(clicked()),this,SLOT(geomtr_rand()));

}

void MainWindow::geomtr_rand()
{
    m_butt_close->setGeometry(rand()%300,rand()%300,rand()%100,rand()%100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
