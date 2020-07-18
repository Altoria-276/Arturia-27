#include "savedialog.h"
#include "ui_savedialog.h"
#include"mainwindow.h"

saveDialog::saveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saveDialog)
{
    ui->setupUi(this);
}

saveDialog::~saveDialog()
{
    delete ui;
}

void saveDialog::on_pushButton_20_clicked()
{
    this->close();
}

void saveDialog::on_pushButton_19_clicked()
{
    ui->_1LineEdit->setText("");
    ui->_2LineEdit->setText("");
    ui->_3LineEdit->setText("");
    ui->_4LineEdit->setText("");
    ui->_5LineEdit->setText("");
    ui->_6LineEdit->setText("");
    ui->_7LineEdit->setText("");
    ui->_8LineEdit->setText("");
    ui->_9LineEdit->setText("");
}

void saveDialog::on_pushButton_clicked()
{
    emit(per_send(1));
}

void saveDialog::getData(QString s,int n)
{
    if (n==1)
    {
        ui->_1LineEdit->setText(s);
    }
    else if(n==2)
    {
        ui->_2LineEdit->setText(s);
    }
    else if(n==3)
    {
        ui->_3LineEdit->setText(s);
    }
    else if(n==4)
    {
        ui->_4LineEdit->setText(s);
    }
    else if(n==5)
    {
        ui->_5LineEdit->setText(s);
    }
    else if(n==6)
    {
        ui->_6LineEdit->setText(s);
    }
    else if(n==7)
    {
        ui->_7LineEdit->setText(s);
    }
    else if(n==8)
    {
        ui->_8LineEdit->setText(s);
    }
    else if(n==9)
    {
        ui->_9LineEdit->setText(s);
    }
}


void saveDialog::on_pushButton_3_clicked()
{
    emit(per_send(2));
}

void saveDialog::on_pushButton_4_clicked()
{
    emit(per_send(3));
}

void saveDialog::on_pushButton_5_clicked()
{
    emit(per_send(4));
}

void saveDialog::on_pushButton_6_clicked()
{
    emit(per_send(5));
}

void saveDialog::on_pushButton_7_clicked()
{
    emit(per_send(6));
}

void saveDialog::on_pushButton_8_clicked()
{
    emit(per_send(7));
}

void saveDialog::on_pushButton_9_clicked()
{
    emit(per_send(8));
}

void saveDialog::on_pushButton_10_clicked()
{
    emit(per_send(9));
}

void saveDialog::on_pushButton_2_clicked()
{
    emit(sendnum(ui->_1LineEdit->text()));
}

void saveDialog::on_pushButton_11_clicked()
{
    emit(sendnum(ui->_2LineEdit->text()));
}

void saveDialog::on_pushButton_12_clicked()
{
    emit(sendnum(ui->_3LineEdit->text()));
}

void saveDialog::on_pushButton_13_clicked()
{
    emit(sendnum(ui->_4LineEdit->text()));
}

void saveDialog::on_pushButton_14_clicked()
{
    emit(sendnum(ui->_5LineEdit->text()));
}

void saveDialog::on_pushButton_15_clicked()
{
    emit(sendnum(ui->_6LineEdit->text()));
}

void saveDialog::on_pushButton_16_clicked()
{
    emit(sendnum(ui->_7LineEdit->text()));
}

void saveDialog::on_pushButton_17_clicked()
{
    emit(sendnum(ui->_8LineEdit->text()));
}

void saveDialog::on_pushButton_18_clicked()
{
    emit(sendnum(ui->_9LineEdit->text()));
}
