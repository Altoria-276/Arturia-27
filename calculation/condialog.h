#ifndef CONDIALOG_H
#define CONDIALOG_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class conDialog;
}

class conDialog : public QDialog
{
    Q_OBJECT

public:
    explicit conDialog(QWidget *parent = nullptr);
    ~conDialog();

signals:

    void sendValue(QString);

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::conDialog *ui;
};

#endif // CONDIALOG_H
