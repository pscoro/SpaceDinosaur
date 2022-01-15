#pragma once

class GameObject
{
public:
    GameObject();
    virtual ~GameObject() = 0;
    virtual void run() = 0;
private:
    virtual void init() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void destroy() = 0;
private:
    bool m_running;
};