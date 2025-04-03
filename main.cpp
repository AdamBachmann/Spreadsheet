#include <QApplication>
#include "finddialog.h"
#include "gotocelldialog.h"
#include "sortdialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //FindDialog *dialog = new FindDialog;
    //dialog->show();

    //GoToCellDialog *gotocelldialog = new GoToCellDialog;
    //gotocelldialog->show();

    SortDialog *sortdialog = new SortDialog;
    sortdialog->show();

    return app.exec();
}
