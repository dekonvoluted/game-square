#include <QGraphicsScene>

#include "square.h"

Square::Square( QWidget* parent ) : QGraphicsView( parent )
{
    auto scene = new QGraphicsScene;
    scene->setSceneRect( 0, 0, 100, 100 );

    this->setScene( scene );
}

