#ifndef __DLG_H
#define __DLG_H

#include <memory>
#include <QDialog>

namespace Ui { class CDlg; }
class CDlg : public QDialog
{
    Q_OBJECT
public:
    CDlg( QWidget * parent=nullptr );
    virtual ~CDlg() override;

private:
    std::unique_ptr< Ui::CDlg > fImpl;
};


#endif
