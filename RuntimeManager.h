#pragma once

#include "Definitions.h"
#include "Game.h"

class RuntimeManager
{
public:
    RuntimeManager();
    ~RuntimeManager();

    Game* getGame();

    int run();
    int pause();
    int stop();

    bool isRunning();

private:
    void runThread();

private:
    Game* game;
    std::thread runtimeThread;
    bool isRunning;
};