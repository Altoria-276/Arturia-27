#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>

namespace Ui {
class saveDialog;
}

class saveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit saveDialog(QWidget *parent = nullptr);
    ~saveDialog();

signals:
    void per_send(int);

    void sendnum(QString);
private slots:
    void on_pushButton_20_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_clicked();

    void getData(QString,int);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::saveDialog *ui;
};

#endif // SAVEDIALOG_H
