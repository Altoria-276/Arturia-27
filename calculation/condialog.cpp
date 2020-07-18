#include "condialog.h"
#include "ui_condialog.h"

conDialog::conDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conDialog)
{
    ui->setupUi(this);
}

conDialog::~conDialog()
{
    delete ui;
}


void conDialog::on_pushButton_clicked()
{
    emit sendValue(ui->lineEdit->text());
}

void conDialog::on_pushButton_2_clicked()
{
    emit sendValue(ui->lineEdit_2->text());
}

void conDialog::on_pushButton_3_clicked()
{
    emit sendValue(ui->lineEdit_3->text());
}

void conDialog::on_pushButton_4_clicked()
{
    emit sendValue(ui->lineEdit_4->text());
}

void conDialog::on_pushButton_5_clicked()
{
    emit sendValue(ui->lineEdit_5->text());
}

void conDialog::on_pushButton_6_clicked()
{
    emit sendValue(ui->lineEdit_6->text());
}

void conDialog::on_pushButton_7_clicked()
{
    emit sendValue(ui->lineEdit_7->text());
}

void conDialog::on_pushButton_8_clicked()
{
    emit sendValue(ui->lineEdit_8->text());
}

void conDialog::on_pushButton_9_clicked()
{
    emit sendValue(ui->lineEdit_9->text());
}
