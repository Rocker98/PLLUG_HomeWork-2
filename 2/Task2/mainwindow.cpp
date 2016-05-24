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
QObject::connect(m_butt_set_geometry,SIGNAL(clicked()),m_butt_set_geometry, \
                 SLOT(setGeometry(100,100,100,100)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
