#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *window = new QWidget;
    QPushButton *butt = new QPushButton("+",window);
    QLabel *label1 = new QLabel("hi",window);
    QLineEdit *lineEdit1 = new QLineEdit(window);
    QLineEdit *lineEdit2 = new QLineEdit(window);

    QVBoxLayout *vLayuot = new QVBoxLayout(window);

    vLayuot->addWidget(lineEdit1);
    vLayuot->addWidget(lineEdit2);
    vLayuot->addWidget(label1);
    vLayuot->addWidget(butt);

    QObject::connect(butt,SIGNAL(clicked(bool)),this,SLOT(suma()));





    window->show();

}

//void MainWindow::suma()
//{
//   label1->setText(QString::number(lineEdit1->text().toInt()+lineEdit2->text().toInt()));
//}



MainWindow::~MainWindow()
{
    delete ui;
}
