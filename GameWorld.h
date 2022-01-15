#pragma once

#include <map>
#include <iostream>

#include "GameObject.h"

class GameWorld
{
public:
    GameWorld();
    virtual ~GameWorld();
    virtual void run() = 0;

private:
    virtual void init() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void destroy() = 0;

private:
    bool m_running;
    std::map<std::string, GameObject*> m_gameObjects;
};