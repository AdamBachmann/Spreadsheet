#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QComboBox>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QChar>
#include <QGroupBox>

class SortDialog : public QDialog
{
    Q_OBJECT;

public:
    SortDialog(QWidget *parent = 0);

private:
    void setColumnRange(QComboBox *comboBox, QChar first, QChar last);

    QComboBox *column;
    QLabel *columnLabel;
    QComboBox *order;
    QLabel *orderLabel;
    QPushButton *sort;
    QPushButton *cancel;
    QPushButton *more;

    QGroupBox *first_group;
    QGroupBox *second_group;
    QGroupBox *third_group;

};

#endif // SORTDIALOG_H
