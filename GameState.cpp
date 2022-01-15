#include "GameState.h"

GameState::GameState()
{
    m_running = true;
}

GameState::~GameState()
{
    // Destroy the game state
    // ...
}

void GameState::run()
{
    init();
    while (m_running)
    {
        update();
        draw();
    }
    destroy();
}

void GameState::init()
{
    // Initialize the game state
    // ...
}

void GameState::update()
{
    // Update the game state
    // ...
}

void GameState::draw()
{
    // Draw the game state
    // ...
}

void GameState::destroy()
{
    // Destroy the game state
    // ...
}


