#include "RuntimeManager.h"

RuntimeManager::RuntimeManager()
{
    this->game = new Game();
}

RuntimeManager::~RuntimeManager()
{
    delete this->game;
}

int RuntimeManager::run()
{
    this->runtimeThread = std::thread(&RuntimeManager::runThread, this);
}

void RuntimeManager::runThread()
{
    this->isRunning = true;
    this->game->run();
}

int RuntimeManager::pause()
{
    this->game->
}

int RuntimeManager::stop()
{
    this->runtimeThread.join();
}

Game* RuntimeManager::getGame()
{
    return this->game;
}

bool RuntimeManager::isRunning()
{
    return this->isRunning;
}