#ifndef PLAYER_H
#define PLAYER_H

#include <array>
#include <memory>

#include "piece.h"

class Player
{
    public:
    Player();
    ~Player() = default;

    private:
    std::array<std::unique_ptr<Piece>, 4> pieces;
};

#endif

