#pragma once

#include "../Definitions.h"
#include "Exception.h"
#include "../Console.h"

class ConsoleException : public Exception
{
public:
    ConsoleException(std::string message, Console* console = nullptr);
    ~ConsoleException();

    std::string getMessage();
    std::string getType();
    Console* getConsole();
protected:
    std::string prompt = "[ConsoleException]$ ";
    std::string type = "ConsoleException";
    std::string message;
    Console* console;
};