#pragma once

#include "Player.h"

class GameState
{
public:
    GameState();
    ~GameState();

    void run();
private:
    void init();
    void update();
    void draw();
    void destroy();
private:
    bool m_running;
    Player *player_ptr;
    // GameWorld *gameWorld_ptr;
};
