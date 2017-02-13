#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGridLayout>
#include <QPushButton>
#include <QWidget>

#include "game.h"
#include "square.h"

Game::Game()
{
    // Create four players
    for ( auto& player : players ) {
    }
}

void Game::play()
{
    // Create a grid
    auto grid = new QGridLayout;

    // Create the four buttons
    auto redButton = new QPushButton( "Add Red" );
    auto greenButton = new QPushButton( "Add Green" );
    auto blueButton = new QPushButton( "Add Blue" );
    auto yellowButton = new QPushButton( "Add Yellow" );

    grid->addWidget( redButton, 0, 0, 1, 1 );
    grid->addWidget( greenButton, 1, 0, 1, 1 );
    grid->addWidget( blueButton, 2, 0, 1, 1 );
    grid->addWidget( yellowButton, 3, 0, 1, 1 );

    // Create a scene
    scene = new QGraphicsScene;

    // Create a view
    auto view = new QGraphicsView( scene );
    view->setMinimumSize( 125, 125 );

    // Add a square to it
    square = new Square();
    square->setRect( QRectF( 0, 0, 100, 100 ) );
    scene->addItem( square );

    grid->addWidget( view, 0, 1, 3, 1 );

    // Create a quit button
    auto quitButton = new QPushButton( "Quit" );
    QObject::connect( quitButton, &QPushButton::clicked, qApp, &QApplication::quit );

    grid->addWidget( quitButton, 3, 1, 1, 1 );

    widget = new QWidget;
    widget->setLayout( grid );
    widget->show();
}

