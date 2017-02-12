#ifndef SQUARE_H
#define SQUARE_H

#include <QGraphicsView>
#include <QWidget>

class Square : public QGraphicsView
{
    public:
    Square( QWidget* = 0 );
    ~Square() = default;
};

#endif

