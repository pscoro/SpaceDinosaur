#pragma once

class PollingStrategy
{
public:
    virtual ~PollingStrategy();

    virtual void poll() = 0;
};