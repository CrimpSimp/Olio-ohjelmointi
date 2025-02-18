#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->num_0,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_1,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_2,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_3,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_4,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_5,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_6,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_7,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_8,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->num_9,&QPushButton::clicked,this,&MainWindow::numberClicks);
    connect(ui->clear,&QPushButton::clicked,this,&MainWindow::clearAndEnterHandler);
    connect(ui->enter,&QPushButton::clicked,this,&MainWindow::clearAndEnterHandler);
    connect(ui->plus,&QPushButton::clicked,this,&MainWindow::operandHanlder);
    connect(ui->minus,&QPushButton::clicked,this,&MainWindow::operandHanlder);
    connect(ui->multiply,&QPushButton::clicked,this,&MainWindow::operandHanlder);
    connect(ui->divide,&QPushButton::clicked,this,&MainWindow::operandHanlder);
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClicks()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button)
    {
        if(state == 1){
            number1 = button->text();
            ui->numberDisplay_1->setText(number1);
        }
        else if(state == 2){
            number2 = button->text();
            ui->numberDisplay_2->setText(number2);
        }

    }

}

void MainWindow::clearAndEnterHandler()
{
    float num1 = ui->numberDisplay_1->text().toFloat();
    float num2 = ui->numberDisplay_2->text().toFloat();
    result = 0;
    QPushButton *button = qobject_cast<QPushButton *>(sender());

     if(button->text() == "Clear")
    {
        resetLineEdits();
        return;
    }

    else if(operand == 0)
    {
        result = num1 + num2;
    }
    else if(operand == 1)
    {
        result = num1 - num2;
    }
    else if(operand == 2)
    {
        result = num1 * num2;
    }
    else if(operand == 3)
    {
        if(num2 == 0)
        {
            ui->resultDisplay->setText("Error");
            return;
        }
        result = num1 / num2;
    }
    ui->resultDisplay->setText(QString::number(result));
    state = 1;
}

void MainWindow::operandHanlder()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button)
    {
        if(button->text() == "+")
        {
            operand = 0;
        }
        else if(button->text() == "-")
        {
            operand = 1;
        }
        else if(button->text() == "*")
        {
            operand = 2;
        }
        else if(button->text() == "/")
        {
            operand = 3;
        }

        state = 2;
    }
}

void MainWindow::resetLineEdits()
{
    ui->numberDisplay_1->clear();
    ui->numberDisplay_2->clear();
    ui->resultDisplay->clear();
    number1 = "";
    number2 = "";
    result = 0;
    state = 1;
}
