#include <QApplication>
#include <QTime>
#include <QMainWindow>

#include "win.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Win *widget = new Win;

    widget->show();
    widget->setWindowTitle("GE");
    return app.exec();
}
