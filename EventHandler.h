#pragma once

#include "Definitions.h"
#include "Event.h"
#include "PollingStrategy.h"

class EventHandler
{
public:
    EventHandler();
    ~EventHandler();

    void run();

    void stop();

private:
    void handleEvent(Event* event);

private:
    std::vector<Event*> events;
    PollingStrategy* pollingStrategy;
};