#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_minimizar_clicked();

    void on_fechar_clicked();

    void on_ajuda_clicked();


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
