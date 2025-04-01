#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QRegularExpression>

class QPushButton;
class QLineEdit;
class QLabel;

class GoToCellDialog : public QDialog
{
    Q_OBJECT;

public:
    GoToCellDialog(QWidget *parent = 0);
    void goToCell();

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;
};

#endif // GOTOCELLDIALOG_H
