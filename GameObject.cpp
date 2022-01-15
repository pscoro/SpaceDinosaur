#include "GameObject.h"

GameObject::GameObject()
{
    m_running = true;
}

GameObject::~GameObject()
{
    // Destroy the game object
    // ...
}

void GameObject::run()
{
    init();
    while (m_running)
    {
        update();
        draw();
    }
    destroy();
}

void GameObject::init()
{
    // Initialize the game object
    // ...
}

void GameObject::update()
{
    // Update the game object
    // ...
}

void GameObject::draw()
{
    // Draw the game object
    // ...
}

void GameObject::destroy()
{
    // Destroy the game object
    // ...
}
