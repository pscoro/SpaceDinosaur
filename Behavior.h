#pragma once

#include "BehaviorParam.h"

class Behavior
{
public:
    virtual ~Behavior() {}
    virtual void doBehavior() = 0;
    
    BehaviorParam getParam() { return param; }
    void setParam(BehaviorParam param) { this->param = param; }

private:
    BehaviorParam param;
};