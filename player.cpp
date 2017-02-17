#include "player.h"

Player::Player()
{
    // Create the four colored pieces
    for ( auto& piece : pieces ) {
        piece = std::make_unique<Piece>();
    }
}

