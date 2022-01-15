#include "GameWorld.h"

GameWorld::GameWorld()
{
    m_running = true;
}

GameWorld::~GameWorld()
{
    // Destroy the game world
    // ...
}

void GameWorld::run()
{
    init();
    while (m_running)
    {
        update();
        draw();
    }
    destroy();
}

void GameWorld::init()
{
    // Initialize the game world
    // ...
}

void GameWorld::update()
{
    // Update the game world
    // ...
}

void GameWorld::draw()
{
    // Draw the game world
    // ...
}

void GameWorld::destroy()
{
    // Destroy the game world
    // ...
}