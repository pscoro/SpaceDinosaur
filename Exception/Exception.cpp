#include "Exception.h"

Exception::Exception(std::string message)
{
    this->message = message;
}

Exception::~Exception()
{
}

std::string Exception::getMessage()
{
    return message;
}

std::string Exception::getType()
{
    return type;
}

std::string Exception::getPrompt()
{
    return prompt;
}
