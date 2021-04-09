#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QtWidgets/QWidget>
#include <QLabel>
#include <QGraphicsDropShadowEffect>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE

namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_set_clicked();

    void on_pushButton_quality_clicked();

    void on_pushButton_chat_clicked();

private:
    Ui::Widget *ui;
    QWidget * widget_set;
    QWidget * widget_quality;
    QWidget * widget_chat;

};
#endif // WIDGET_H
