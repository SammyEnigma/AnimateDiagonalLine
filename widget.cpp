#include "widget.h"

#include <QPainter>
#include <QTimer>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), SLOT(moveLine()));
    timer->start(1000/60); // 60 fps
    step = 0;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(QPoint(step, 0), QPoint(0, step));
}

void Widget::moveLine()
{
    step++;
    if (step > width() + height()) {
        step = 0;
    }
    update();
}

