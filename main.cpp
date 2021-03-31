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
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    int exec;
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
