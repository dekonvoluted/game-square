#ifndef GAME_H
#define GAME_H

#include <array>
#include <memory>

#include "player.h"

class QGraphicsScene;
class QWidget;

class Square;

class Game
{
    public:
    Game();
    ~Game() = default;

    void play();

    private:
    QWidget* widget = nullptr;
    QGraphicsScene* scene = nullptr;

    std::array<std::unique_ptr<Player>, 4> players;
    Square* square = nullptr;
};

#endif

