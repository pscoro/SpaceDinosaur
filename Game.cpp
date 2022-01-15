#include <iostream>

#include "Game.h"



Game::Game()
{
    
}

Game::~Game()
{
    // Destroy the game
    // ...
}

void Game::run()
{
    // DialogResponse mainMenuResponse = Dialog::MainMenu();
    // this->isRunning = true;
    this->init();
    while (this->isRunning)
    {
        if(!this->isPaused)
        {
            this->update();
            this->draw();
        } else {
            std::this_thread::sleep_for (std::chrono::milliseconds(REFRESH_RATE));
        }
    }
}

void Game::pause()
{
    this->isPaused = true;
}

void Game::unpause()
{
    this->isPaused = false;
}

void Game::stop()
{
    this->isRunning = false;
}

void Game::init()
{
    // Initialize the game
    // ...
    // Create the player
    // ...
    // Create the game world
    // ...
    // Create the game objects
    // ...
    // Create the dialogs
    // ...
}

void Game::update()
{
    // Update the game
    // ...
}

void Game::draw()
{
    // Draw the game
    // ...
}

void Game::destroy()
{
    // Destroy the game
    // ...
}

