#ifndef SQUARE_H
#define SQUARE_H

#include <QGraphicsRectItem>

class Square : public QGraphicsRectItem
{
    public:
    Square( QGraphicsItem* = 0 );
    ~Square() = default;
};

#endif

