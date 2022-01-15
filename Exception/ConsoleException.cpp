#include "ConsoleException.h"

ConsoleException::ConsoleException(std::string message, Console* console)
{
    this->message = message;
    this->console = console;
}

ConsoleException::~ConsoleException()
{
}

std::string ConsoleException::getMessage()
{
    return message;
}

Console* ConsoleException::getConsole()
{
    return console;
}

std::string ConsoleException::getType()
{
    return type;
}