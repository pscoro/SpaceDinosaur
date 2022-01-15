#pragma once

#include "Behavior.h"
#include "BehaviorParam.h"

class WalkBehavior : public Behavior
{
public:
    WalkBehavior(BehaviorParam param = BehaviorParam());
    ~WalkBehavior();

    void doBehavior();
};