#include "qtinclude/imagemanager.h"
#include "ui/histeqwidget.h"
#include "ui/rgbhsvwidget.h"
#include "ui/lightfieldwidget.h"
#include "ui/adaptivelightfieldwidget.h"
#include <QApplication>
#include <QtCore/qglobal.h>
#include <qfile.h>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageManager w;

    QFile f(":/qdarkstyle/style.qss");
    if (!f.exists())
    {
        printf("Unable to set stylesheet, file not found\n");
    }
    else
    {
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        qApp->setStyleSheet(ts.readAll());
    }
    w.addTool(new LightfieldWidget);
//    w.addTool(new HistEqWidget);
//    w.addTool(new AdaptiveLightfieldWidget);
    //w.addTool(new RgbHsvWidget);

    w.show();

    return a.exec();
}
