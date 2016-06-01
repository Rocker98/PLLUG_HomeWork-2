#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget *window = new QWidget;

    QLabel *label1 = new QLabel("I'm Label",window);
    QLineEdit *line1 = new QLineEdit(window);
    line1->setGeometry(100,100,50,60);
    label1->setGeometry(20,30,50,50);
    window->show();




}

MainWindow::~MainWindow()
{
    delete ui;
}
