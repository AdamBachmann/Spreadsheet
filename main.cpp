#include <QApplication>
#include "finddialog.h"
#include "gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    FindDialog *dialog = new FindDialog;
    dialog->show();

    GoToCellDialog *gotocelldialog = new GoToCellDialog;
    gotocelldialog->show();
    return app.exec();
}
