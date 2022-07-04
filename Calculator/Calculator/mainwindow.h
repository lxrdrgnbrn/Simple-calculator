#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Operations.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Operations op;

private slots:
    void Digit();//Обработчик для цифр

    void on_pushButton_Dot_clicked();
    void on_pushButton_Negative_clicked();
    void on_pushButton_Percent_clicked();
    void on_pushButton_Equal_clicked();

    void CheckFlag();//Изменение флага для всех операций
    void Handler();//Обработчик для операций

    void on_pushButton_Sin_clicked();
    void on_pushButton_Ln_clicked();
    void on_pushButton_Cos_clicked();
    void on_pushButton_Exp_clicked();
    void on_pushButton_AC_clicked();
    void on_pushButton_Tan_clicked();
};
#endif // MAINWINDOW_H
