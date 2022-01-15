#pragma once

#include "../Definitions.h"
#include "DLGCache.h"
#include "Dialog.h"
#include "DLGLexer.h"
#include "DLGParser.h"
#include "DLGParseException.h"
#include "../FileReader.h"
#include "DLGToken.h"

class DLGInterpreter
{
public:
    class Instruction
    {
    public:
        Instruction(std::vector<DLGToken> tokens);
        ~Instruction();

        std::vector<DLGToken> getTokens();
    
    private:
        std::vector<DLGToken> tokens;
    };

    DLGInterpreter(DLGCache* cache = nullptr);
    ~DLGInterpreter();

    Dialog readDLG(std::string filePath, bool cacheInLookupTable, bool cacheDLG = true);

    void setDLGCache(DLGCache* cache);

private:
    DLGCache* cache;
};