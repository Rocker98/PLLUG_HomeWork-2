#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *window1 = new QWidget;

    QPushButton *butt = new QPushButton(window1);
    QProgressBar *progBar = new QProgressBar(window1);
    QSlider *mSlider = new QSlider(window1);
    QLabel *mLabel = new QLabel(window1);
    QLineEdit *lineEdit = new QLineEdit(window1);
    QSpinBox *spinBox = new QSpinBox(window1);

    QVBoxLayout *vLayout = new QVBoxLayout(window1);
    QHBoxLayout *hLayout1 = new QHBoxLayout(window1);

    QSpacerItem *spaser = new QSpacerItem(2,100);
    QSpacerItem *spaser1 = new QSpacerItem(200,10);

    hLayout1->addWidget(lineEdit);
    hLayout1->addSpacerItem(spaser1);


    vLayout->addWidget(butt);
    vLayout->addWidget(progBar);
    vLayout->addWidget(mLabel);
    vLayout->addWidget(mSlider);
    vLayout->addLayout(hLayout1);
    vLayout->addWidget(spinBox);

    vLayout->addSpacerItem(spaser);

    window1->setLayout(vLayout);
    window1->show();





}

MainWindow::~MainWindow()
{
    delete ui;
}
