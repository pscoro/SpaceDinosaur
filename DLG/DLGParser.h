#pragma once

#include "../Definitions.h"
#include "DLGParseException.h"
#include "DLGToken.h"
#include "Dialog.h"

class DLGParser
{
public:
    DLGParser();
    ~DLGParser();

    Dialog* parseTokens(std::vector<DLGToken> tokens);
};