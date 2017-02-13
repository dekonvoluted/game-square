#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsEllipseItem>

class Piece : public QGraphicsEllipseItem
{
    public:
    Piece( QGraphicsItem* = 0 );
    ~Piece() = default;
};

#endif

