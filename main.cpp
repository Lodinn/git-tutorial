/*#include "fibonacci.h"
#include <cstdio>
#include <stdlib.h>

int get_int() {
  int n = 0;
  char buffer[128];
  std::printf("Enter a number:\n");
  fgets(buffer,sizeof(buffer),stdin);
  n = atoi(buffer);
  return ( n > 42 || n < 1 ) ? 0 : n;
}

int main () {
  int n = get_int();
  std::printf("fib(%d) = %d\n", n, fib(n));
  return 0;
}
*/

#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QDebug>
#include <signal.h>

int main(int argc, char *argv[])
{
    int exec;
    int signals_to_filter[8] = {SIGINT, SIGILL, SIGFPE, SIGSEGV, SIGTERM, SIGBREAK, SIGABRT, SIGABRT_COMPAT};
    for(int i = 0; i < 8; i++) {
      signal(signals_to_filter[i], [](int sig) {
        qDebug() << "caught signal" << sig;
        qApp->quit();
      });
    }
    try {
      QApplication a(argc, argv);
      MainWindow w;
      w.show();
      exec = a.exec();
    } catch (...) {
      qDebug() << "exitCode = " << exec;
      return EXIT_FAILURE; // exit the application FAILURE
    }
    return exec;
}
