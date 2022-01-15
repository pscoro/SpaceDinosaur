#pragma once

#include "../Definitions.h"
#include "DLGParseException.h"
#include "DLGToken.h"
#include "../Util.h"
#include "../Console.h"

class DLGLexer
{
public:
    DLGLexer();
    ~DLGLexer();

    std::vector<DLGToken> getTokensFromString(std::string raw);

};
