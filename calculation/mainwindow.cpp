#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_board_Q_clicked()
{
    ui->board_Q->close();
}

void MainWindow::on_board_1_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="1";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_2_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="2";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_3_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="3";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_4_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="4";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_5_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="5";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_6_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="6";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_7_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="7";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_8_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="8";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_9_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str=="0")
    {
        str="";
    }
    str+="9";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_0_clicked()
{
    if((not ui->LineEdit_cor->text().endsWith(" "))and(ui->LineEdit_cor->text()!=""))
    {
        ui->LineEdit_cor->setText(ui->LineEdit_cor->text()+" ");
        ui->LineEdit_num->setText(ui->lineEdit->text());
        ui->lineEdit->setText("");
    }
    QString str = ui->lineEdit->text();
    if(str.startsWith("0")&&(not str.contains(".")))
    {
        return;
    }
    str+="0";
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_c_1_clicked()
{
    QString str = ui->LineEdit_cor->text();
    if(str.endsWith(" "))
    {
        str = "+ ";
    }
    else str = "+";
    ui->LineEdit_cor->setText(str);
}

void MainWindow::on_board_c_2_clicked()
{
    QString str = ui->LineEdit_cor->text();
    if(str.endsWith(" "))
    {
        str = "- ";
    }
    else str = "-";
    ui->LineEdit_cor->setText(str);
}

void MainWindow::on_board_c_3_clicked()
{
    QString str = ui->LineEdit_cor->text();
    if(str.endsWith(" "))
    {
        str = "* ";
    }
    else str = "*";
    ui->LineEdit_cor->setText(str);
}

void MainWindow::on_board_c_4_clicked()
{
    QString str = ui->LineEdit_cor->text();
    if(str.endsWith(" "))
    {
        str = "/ ";
    }
    else str = "/";
    ui->LineEdit_cor->setText(str);
}

void MainWindow::on_board_c_11_clicked()
{
    QString str = ui->LineEdit_cor->text();
    if(str.endsWith(" "))
    {
        str = "^ ";
    }
    else str = "^";
    ui->LineEdit_cor->setText(str);
}

void MainWindow::on_board_d_2_clicked()
{
    QString str = ui->lineEdit->text();
    double n = str.toDouble();
    n = pow(n,0.5);
    ui->LineEdit_cor->setText("sqrt");
    QString str1 = QString("%1").arg(n, 0, 'g');
    ui->lineEdit->setText(str1);
}

void MainWindow::on_board_d_1_clicked()
{
    QString str = ui->lineEdit->text();
    double n = str.toDouble();
    n = pow(n,2);
    ui->LineEdit_cor->setText("^2");
    QString str1 = QString("%1").arg(n, 0, 'g');
    ui->lineEdit->setText(str1);
}

void MainWindow::on_board_e_3_clicked()
{
    QString str = ui->lineEdit->text();
    if(str=="") return;
    QString str1 = str.left(str.size() - 1);
    ui->lineEdit->setText(str1);
}

void MainWindow::on_board_e_1_clicked()
{
    ui->lineEdit->setText("");
}

void MainWindow::on_board_e_2_clicked()
{
    ui->lineEdit->setText("");
    ui->LineEdit_Er->setText("");
    ui->LineEdit_cor->setText("");
    ui->LineEdit_num->setText("");
    ui->LineEdit_num_2->setText("");
}

void MainWindow::on_board_d_3_clicked()
{
    QString str = ui->lineEdit->text();
    if((str=="")or(str=="0")) return;
    if(str.startsWith("-"))
    {
        str = str.right(str.size()-1);
    }
    else str = "-" + str;
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_c_5_clicked()
{
    if(ui->LineEdit_cor->text().endsWith(" "))
    {
        ui->LineEdit_num_2->setText(ui->lineEdit->text());
    }
    ui->LineEdit_Er->setText("");
    QString cor=ui->LineEdit_cor->text();
    QString str=ui->LineEdit_num_2->text();
    QString str1=ui->LineEdit_num->text();
    if(str=="" or str1=="" or cor=="" or cor== "^2" or cor== "sqrt") return;
    double num = str.toDouble();
    double num1 = str1.toDouble();
    if(cor.startsWith("+"))
    {
        num1 +=num;
        cor="+";
    }
    else if(cor.startsWith("-"))
    {
        num1-=num;
        cor = "-";
    }
    else if(cor.startsWith("*"))
    {
        num1*=num;
        cor = "*";
    }
    else if(cor.startsWith("/"))
    {
        if(num==0)
        {
            ui->LineEdit_Er->setText("分母不能为0");
            return;
        }
        num1/=num;
        cor = "/";
    }
    else if(cor.startsWith("^"))
    {
        num1 = pow(num1,num);
        cor = "^";
    }
    else return;
    QString str2 = QString("%1").arg(num1, 0, 'g');
    ui->lineEdit->setText(str2);
    ui->LineEdit_num->setText(str2);
    ui->LineEdit_cor->setText(cor);

}


void MainWindow::on_board_b_1_clicked()
{
    conDialog* conD = new conDialog;
    connect(conD,SIGNAL(sendValue(QString)),this,SLOT(getValuef(QString)));
    conD->show();
}

void MainWindow::getValuef(QString str)
{
    ui->lineEdit->setText(str);
}

void MainWindow::on_board_b_2_clicked()
{
    saveDialog* savd = new saveDialog;
    connect(this,SIGNAL(sendData(QString,int)),savd,SLOT(getData(QString,int)));
    connect(savd,SIGNAL(per_send(int)),this,SLOT(per_get(int)));
    connect(savd,SIGNAL(sendnum(QString)),this,SLOT(loadnum(QString)));
    savd->show();
}

void MainWindow::loadnum(QString s)
{
    ui->lineEdit->setText(s);
}

void MainWindow::per_get(int s)
{
    emit sendData(ui->lineEdit->text(),s);
}

void MainWindow::on_board_c_6_clicked()
{
    if(ui->lineEdit->text()=="")
    {
        ui->lineEdit->setText("0.");
    }
    else ui->lineEdit->setText(ui->lineEdit->text()+".");
}
