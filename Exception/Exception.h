#pragma once

#include "../Definitions.h"

class Exception
{
public:
    Exception(std::string message);
    virtual ~Exception();

    virtual std::string getMessage();
    virtual std::string getType();
    virtual std::string getPrompt();
protected:
    std::string prompt = "[Exception]$ ";
    std::string type = "Exception";
    std::string message;
};
