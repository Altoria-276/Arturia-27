#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWidget>
#include<math.h>
#include "condialog.h"
#include "savedialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void sendData(QString,int);

private slots:
    void loadnum(QString);

    void per_get(int);

    void on_board_Q_clicked();

    void on_board_1_clicked();

    void on_board_2_clicked();

    void on_board_3_clicked();

    void on_board_4_clicked();

    void on_board_5_clicked();

    void on_board_6_clicked();

    void on_board_7_clicked();

    void on_board_8_clicked();

    void on_board_9_clicked();

    void on_board_0_clicked();

    void on_board_c_1_clicked();

    void on_board_c_2_clicked();

    void on_board_c_3_clicked();

    void on_board_c_4_clicked();

    void on_board_c_11_clicked();

    void on_board_e_3_clicked();

    void on_board_e_1_clicked();

    void on_board_e_2_clicked();

    void on_board_d_3_clicked();

    void on_board_d_1_clicked();

    void on_board_d_2_clicked();

    void on_board_c_5_clicked();

    void on_board_b_1_clicked();

    void getValuef(QString s);
    void on_board_b_2_clicked();

    void on_board_c_6_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
