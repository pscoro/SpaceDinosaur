#pragma once

#include "Definitions.h"
#include "Event.h"

class DamageEvent : public Event
{
public:
    DamageEvent(std::string eventDescription, float damage, std::string location);
    ~DamageEvent();

    std::map<std::string, std::string> getConsequences();
};