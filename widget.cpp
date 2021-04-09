#include "widget.h"
#include "ui_widget.h"

// 构造函数
Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    widget_set = ui->page_set;
    widget_quality = ui->page_quality;
    widget_chat = ui->page_chat;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_set_clicked()
{
    if(ui->stackedWidget->currentWidget() != widget_set){
        ui->stackedWidget->setCurrentWidget(widget_set);
    }
}

void Widget::on_pushButton_quality_clicked()
{
    if(ui->stackedWidget->currentWidget() != widget_quality){
        ui->stackedWidget->setCurrentWidget(widget_quality);
    }
}

void Widget::on_pushButton_chat_clicked()
{
    if(ui->stackedWidget->currentWidget() != widget_chat){
        ui->stackedWidget->setCurrentWidget(widget_chat);
    }
}
