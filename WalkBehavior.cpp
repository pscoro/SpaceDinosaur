#include "WalkBehaviour.h"

WalkBehavior::WalkBehavior(BehaviorParam param)
{
    this->param = param;
}

WalkBehavior::~WalkBehavior()
{
}

void WalkBehavior::doBehavior()
{
    std::cout << "WalkBehavior::doBehavior()" << std::endl;
}
