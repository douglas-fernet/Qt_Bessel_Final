#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_minimizar_clicked()
{
    showMinimized();
}


void Widget::on_fechar_clicked()
{
    close();
}

void Widget::on_ajuda_clicked()
{
   QMessageBox::about(this, tr("Ajuda"),
                tr("LOREMIPSLUMLOREMIPSLUMLOREMIPSLUM\nLOREMIPSLUMLOREMIPSLUMLOREMIPSLUMLOR\nEMIPSLUMLOREMIPSLUMLOREMIPSLUM"));
}

