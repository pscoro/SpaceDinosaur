#include "BehaviorParam.h"

BehaviorParam::BehaviorParam()
{
}

BehaviorParam::~BehaviorParam()
{
}

void BehaviorParam::setParam(std::string key, std::vector<std::string> value)
{
    params[key] = value;
}

std::vector<std::string> BehaviorParam::getParam(std::string key)
{
    return params[key];
}

std::map<std::string, std::vector<std::string>> BehaviorParam::getParams()
{
    return params;
}

std::vector<std::string> BehaviorParam::getKeys()
{
    std::vector<std::string> keys;
    for (auto it = params.begin(); it != params.end(); it++)
    {
        keys.push_back(it->first);
    }
    return keys;
}

BehaviorParam BehaviorParam::WalkBehavior(float baseSpeed, float speedMultiplier, f_Vec2 target, float currentSpeed)
{
    BehaviorParam param;
    param.setParam("baseSpeed", std::vector<std::string>{std::to_string(baseSpeed)});
    param.setParam("speedMultiplier", std::vector<std::string>{std::to_string(speedMultiplier)});
    param.setParam("target", std::vector<std::string>{std::to_string(target.first), std::to_string(target.second)});
    param.setParam("currentSpeed", std::vector<std::string>{std::to_string(currentSpeed)});
    return param;
}
