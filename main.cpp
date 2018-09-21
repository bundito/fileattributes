#include <QCoreApplication>
#include <QString>
#include <QDebug>
#include "fileattributes.h"


int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    FileAttributes attr = QString("ade:poweruser:2424");

    qDebug() << attr.isValid();
    qDebug() << attr.getUsername();

    FileAttributes attr2 = QString("blerg");
    qDebug() << attr.isValid();

}
