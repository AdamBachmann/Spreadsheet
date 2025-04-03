#include <QtGui>
#include "sortdialog.h"

SortDialog::SortDialog(QWidget *parent)
    : QDialog(parent)
{
    column = new QComboBox;
    columnLabel = new QLabel(tr("&Column"));
    columnLabel->setBuddy(column);
    setColumnRange(column, 'A', 'Z');

    order = new QComboBox;
    orderLabel = new QLabel(tr("&Order"));
    orderLabel->setBuddy(order);
    setColumnRange(order, 'A', 'Z');

    first_group = new QGroupBox(tr("First Group"));
    first_group->setTitle(tr("First Group"));

    // buttons
    sort = new QPushButton(tr("&Sort"));
    sort->setDefault(true);

    cancel = new QPushButton(tr("Cancel"));
    more = new QPushButton(tr("More"));

    QHBoxLayout *column_layout = new QHBoxLayout;
    column_layout->addWidget(columnLabel);
    column_layout->addWidget(column);

    QHBoxLayout *order_layout = new QHBoxLayout;
    order_layout->addWidget(orderLabel);
    order_layout->addWidget(order);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(column_layout);
    leftLayout->addLayout(order_layout);
    first_group->setLayout(leftLayout);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(sort);
    rightLayout->addWidget(cancel);
    rightLayout->addWidget(more);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    //mainLayout->addLayout(leftLayout);
    mainLayout->addWidget(first_group);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Sort"));
    setFixedHeight(sizeHint().height());
}

void SortDialog::setColumnRange(QComboBox *comboBox, QChar first, QChar last)
{
    QChar currentChar = first;
    while(currentChar <= last)
    {
        comboBox->addItem(currentChar);
        currentChar = static_cast<QChar>(currentChar.unicode() + 1);
    }
}
