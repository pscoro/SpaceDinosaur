#pragma once

#include "Definitions.h"
#include "PollingStrategy.h"

class FCFSPollingStrategy : public PollingStrategy
{
public:
    FCFSPollingStrategy();
    ~FCFSPollingStrategy();

    void poll();
};