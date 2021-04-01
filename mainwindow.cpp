#include "mainwindow.h"
#include <QApplication>
#include <signal.h>
#include <QDebug>
#include <QLayout>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
  QWidget *centralwidget = new QWidget();
  this->setCentralWidget(centralwidget);
  auto *layout = new QHBoxLayout(centralwidget);
  QPushButton *pb = new QPushButton("CRASH");
  layout->addWidget(pb);
  pb->connect(pb, &QPushButton::clicked, this, &ExceptionThrower::cause_exception);
  centralwidget->setLayout(layout);

//  ExceptionThrower::cause_exception(SIGTERM);
  //ExceptionThrower::cause_exception(SIGSEGV);
}

MainWindow::~MainWindow()
{

}

void ExceptionThrower::cause_exception() {
  //raise(SIGTERM);
  throw std::runtime_error("RTE");
}
