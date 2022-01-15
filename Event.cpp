#include "Event.h"

Event::~Event()
{
}

void Event::setType(std::string type)
{
    this->type = type;
}

std::map<std::string, std::string> Event::getConsequences()
{
    return consequences;
}

std::string Event::getType()
{
    return type;
}