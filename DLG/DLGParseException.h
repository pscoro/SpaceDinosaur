#pragma once

#include "../Definitions.h"
#include "../Exception/Exception.h"

class DLGParseException : public Exception
{
public:
    DLGParseException(std::string message);
    ~DLGParseException();

private:
    std::string prompt = "[DLGParseException]$ ";
    std::string type = "DLGParseException";
};