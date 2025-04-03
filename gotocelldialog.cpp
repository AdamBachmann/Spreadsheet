#include <QtGui>
#include <iostream>
#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent)
    : QDialog(parent)
{
    QRegularExpression regExp("[A-Za-z][1-9][0-9]{0,2}");

    label = new QLabel(tr("Go to cell"));
    lineEdit = new QLineEdit;
    lineEdit->setValidator(new QRegularExpressionValidator(regExp, this));
    label->setBuddy(lineEdit);

    okButton = new QPushButton(tr("OK"));
    okButton->setDefault(true);
    okButton->setEnabled(true);

    cancelButton = new QPushButton(tr("Cancel"));
    cancelButton->setEnabled(true);

    //connect(okButton, SIGNAL(clicked()),
        //this, SLOT(goToCell()));
    connect(cancelButton, SIGNAL(clicked()),
        this, SLOT(close()));

    QHBoxLayout *topLayout = new QHBoxLayout;
    topLayout->addWidget(label);
    topLayout->addWidget(lineEdit);

    QHBoxLayout *botLayout = new QHBoxLayout;
    botLayout->addWidget(okButton);
    botLayout->addWidget(cancelButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(botLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Go to cell"));
    setFixedHeight(sizeHint().height());
}

void GoToCellDialog::goToCell()
{
    std::cout << "goToCell() called" << std::endl;
}

//void GoToCellDialog::on_lineEdit_textChanged()
//{
//    okButton->setEnabled(lineEdit->hasAcceptableInput());
//}
