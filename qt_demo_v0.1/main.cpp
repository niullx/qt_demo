#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Host information");
    QPalette pal(w.palette());
    pal.setColor(QPalette::Background,Qt::gray);
    w.setAutoFillBackground(true);
    w.setPalette(pal);
    w.show();

    return a.exec();
}
