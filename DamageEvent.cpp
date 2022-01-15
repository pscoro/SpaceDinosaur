#include "DamageEvent.h"

DamageEvent::DamageEvent(std::string eventDescription, float damage, std::string location)
{
    this->consequences["eventDescription"] = eventDescription;
    this->consequences["damage"] = damage;
    this->consequences["location"] = location;

    this->type = "DamageEvent";
}