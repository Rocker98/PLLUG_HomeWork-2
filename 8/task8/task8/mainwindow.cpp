#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSlider>
#include <QProgressBar>
#include <QSpinBox>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSpinBox *spinBox = new QSpinBox;
        QProgressBar *progBar = new QProgressBar;
        QSlider *mSlider = new QSlider;
        spinBox->setMaximum(100);
        progBar->setMaximum(100);
        mSlider->setMaximum(100);

        QWidget *window = new QWidget;
        QVBoxLayout *layout =new QVBoxLayout;


        layout->addWidget(spinBox);
        layout->addWidget(progBar);
        layout->addWidget(mSlider);

        window->setLayout(layout);
        window->show();

        QObject::connect(spinBox,SIGNAL(valueChanged(int)),progBar, SLOT(setValue(int)));
        QObject::connect(progBar,SIGNAL(valueChanged(int)),mSlider,SLOT(setValue(int)));
        QObject::connect(mSlider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
