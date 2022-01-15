#pragma once

#include "Definitions.h"


class BehaviorParam
{
public:
    BehaviorParam();
    ~BehaviorParam();

    void setParam(std::string key, std::vector<std::string> value);
    std::vector<std::string> getParam(std::string key);
    std::map<std::string, std::vector<std::string>> getParams();
    std::vector<std::string> getKeys();

    static BehaviorParam WalkBehavior(float baseSpeed, float speedMultiplier, f_Vec2 target, float currentSpeed);
    static BehaviorParam JumpBehavior();
    static BehaviorParam AttackBehavior();
    static BehaviorParam DefendBehavior();

private:
    std::map<std::string, std::vector<std::string>> params;
};