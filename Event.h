#pragma once

#include "Definitions.h"

class Event
{
public:
    virtual ~Event();
    virtual std::map<std::string, std::string> getConsequences();
    std::string getType();
    void setType(std::string type);
protected:
    std::string type;
    std::map<std::string, std::string> consequences;
};