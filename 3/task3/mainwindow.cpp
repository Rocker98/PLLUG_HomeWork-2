#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    butt = new QPushButton(this);
    butt->setText("Push me!");
    butt->setGeometry(150,150,100,50);

    editor = new QLineEdit(this);

    QObject::connect(butt,SIGNAL(clicked(bool)),this,SLOT(settingText()));
}

void MainWindow::settingText()
{
    butt->setText(editor->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}
