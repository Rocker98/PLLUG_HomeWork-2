#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <time.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *m_butt_close;
    QPushButton *m_butt_set_geometry;


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
