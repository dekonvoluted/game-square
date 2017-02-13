#include <QGraphicsItem>

#include "piece.h"

Piece::Piece( QGraphicsItem* parent ) : QGraphicsEllipseItem( parent )
{
    setRect( 0, 0, 100, 100 );
}

