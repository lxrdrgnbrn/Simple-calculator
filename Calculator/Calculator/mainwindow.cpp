#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_Plus,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Minus,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Multiply,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Div,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Pow,SIGNAL(clicked()),this,SLOT(Handler()));

    ui->pushButton_Plus->setCheckable(true);
    ui->pushButton_Minus->setCheckable(true);
    ui->pushButton_Multiply->setCheckable(true);
    ui->pushButton_Div->setCheckable(true);
    ui->pushButton_Pow->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Digit()
{
    QPushButton *button=(QPushButton *)sender();
    QString new_label;
    if (ui->label->text().contains('.')&& button->text()=="0")
        new_label=ui->label->text()+button->text();
    else
    new_label=QString::number(((ui->label->text()+button->text()).toDouble()),'g',15);
    ui->label->setText(new_label);
}

void MainWindow::CheckFlag()
{
    ui->pushButton_Plus->setChecked(false);
    ui->pushButton_Minus->setChecked(false);
    ui->pushButton_Multiply->setChecked(false);
    ui->pushButton_Div->setChecked(false);
    ui->pushButton_Pow->setChecked(false);
}

void MainWindow::Handler()
{
    CheckFlag();
    QPushButton *button=(QPushButton *)sender();
    button->setChecked(true);
    op.setX((ui->label->text()).toDouble());
    ui->label->clear();
}

void MainWindow::on_pushButton_Dot_clicked()
{
    if(!(ui->label->text().contains(".")))
      ui->label->setText(ui->label->text()+".");
}

void MainWindow::on_pushButton_Negative_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Negative(),'g',15);
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Percent_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Precent());
    ui->label->setText(new_label);
}



void MainWindow::on_pushButton_Equal_clicked()
{
    QString new_label;
    if(ui->label->text()=="")
       op.setY(op.getX());
    else
        op.setY((ui->label->text()).toDouble());
    if(ui->pushButton_Plus->isChecked())
    {
        new_label=QString::number(op.Summ());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }
    if(ui->pushButton_Minus->isChecked())
    {
        new_label=QString::number(op.Subtract());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }
    if (ui->pushButton_Multiply->isChecked())
    {
        new_label=QString::number(op.Multiplication());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }
    if (ui->pushButton_Div->isChecked())
    {
        try {
        new_label=QString::number(op.Division());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
        }
        catch (Except e)
        {
            ui->label->setText("На 0 делить нельзя");
        }
    }
    if (ui->pushButton_Pow->isChecked())
    {
        new_label=QString::number(op.Power());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }

}

void MainWindow::on_pushButton_Sin_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Sin());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Ln_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Ln());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Cos_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Cos());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Exp_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Exp());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->label->clear();
    CheckFlag();
}

void MainWindow::on_pushButton_Tan_clicked()
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Tan());
    ui->label->setText(new_label);
}

