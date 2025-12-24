#include "widget.h"
#include "ui_widget.h"
#include "dialog.h"

#include <iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// void Widget::on_pushButton_clicked()
// {
//     std::cout<< "Please Dont Touch Me!!!" << std::endl;
// }


void Widget::on_JustPush_clicked()
{
    std::cout <<"Just Touch Me!" << std::endl;
}


void Widget::on_PushMe_clicked()
{
    std::cout<< "Please Dont Touch Me!!!" << std::endl;
}


void Widget::on_Exit_clicked()
{
    qApp->quit();
}


void Widget::on_ShowDialog_clicked()
{
    Dialog *d  = new Dialog(this);
    d->show();
}

