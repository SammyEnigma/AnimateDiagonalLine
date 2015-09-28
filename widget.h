#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);

signals:

private slots:
    void moveLine();

private:
    void paintEvent(QPaintEvent *);
    int step;
};

#endif // WIDGET_H
