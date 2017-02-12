#include <QApplication>
#include <QGridLayout>
#include <QMainWindow>
#include <QPushButton>
#include <QWidget>

#include "square.h"

int main( int argc, char** argv )
{
    QApplication app( argc, argv);

    auto redButton = new QPushButton( "Add Red" );
    auto greenButton = new QPushButton( "Add Green" );
    auto blueButton = new QPushButton( "Add Blue" );
    auto yellowButton = new QPushButton( "Add Yellow" );

    auto gridLayout = new QGridLayout;
    gridLayout->addWidget( redButton, 0, 0, 1, 1 );
    gridLayout->addWidget( greenButton, 1, 0, 1, 1 );
    gridLayout->addWidget( blueButton, 2, 0, 1, 1 );
    gridLayout->addWidget( yellowButton, 3, 0, 1, 1 );

    auto square = new Square;
    gridLayout->addWidget( square, 0, 1, 4, 1 );

    auto dummyWidget = new QWidget;
    dummyWidget->setLayout( gridLayout );

    auto window = new QMainWindow;
    window->setCentralWidget( dummyWidget );
    window->show();

    return app.exec();
}

