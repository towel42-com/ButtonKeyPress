#include "dlg.h"
#include "ui_dlg.h"
#include <QPushButton>
#include <QKeyEvent>
CDlg::CDlg( QWidget * parent ) :
    QDialog( parent ),
    fImpl( new Ui::CDlg )
{
    fImpl->setupUi( this );
    QStringList items;
    for ( char ch = 'A'; ch <= 'z'; ++ch )
    {
        items << QString( "%1" ).arg( ch );
    }
    fImpl->listWidget->addItems( items );
}

CDlg::~CDlg()
{

}

#pragma warning( disable : 4273 )

void QPushButton::keyPressEvent( QKeyEvent * xEvent )
{
    switch ( xEvent->key() )
    {
        case Qt::Key_PageUp:
        case Qt::Key_PageDown:
        case Qt::Key_Up:
        case Qt::Key_Down:
        xEvent->ignore();
        break;
        case Qt::Key_Return:
        clicked();
        break;
        default:
        xEvent->accept();
        break;
    }
}
