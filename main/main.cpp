#include "dlg.h"
#include <QApplication>

int main( int argc, char ** argv )
{
    QApplication appl( argc, argv );
    CDlg dlg;
    dlg.exec();
    return appl.exec();
}
