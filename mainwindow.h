#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class ExceptionThrower {
public:
  static void cause_exception();
private:
  int z = 0;
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
private slots:

};
#endif // MAINWINDOW_H
