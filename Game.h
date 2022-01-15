#pragma once

#include "Definitions.h"
#include "Player.h"
#include "GameState.h"
#include "GameWorld.h"
#include "GameObject.h"
#include "Dialog.h"
#include "DialogResponse.h"


class Game
{
public:
    // Constructor
    Game();

    // Destructor
    ~Game();

    // Run the game
    void run();

    void pause();

    void unpause();

    void stop();
private:
    // Initialize the game
    void init();

    // Update the game
    void update();

    // Draw the game
    void draw();

    // Destroy the game
    void destroy();
private:
    // Is the game running?
    bool isRunning;
    bool isPaused;
    GameState currentState;
    Player *playerPtr;
    GameWorld *gameWorldPtr;
};