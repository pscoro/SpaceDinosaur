#include "DLGParseException.h"

DLGParseException::DLGParseException(std::string message) : Exception(message)
{
    this->message = message;
    this->type = "DLGParseException";
}

DLGParseException::~DLGParseException()
{
}
