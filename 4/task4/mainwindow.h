#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QWidget *window;
    QPushButton *butt;
    QLabel *label1;
    QLineEdit *lineEdit1 ;
    QLineEdit *lineEdit2;


public slots:
    void suma()
    {
           label1->setText(QString::number(lineEdit1->text().toInt()+lineEdit2->text().toInt()));
    }

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
