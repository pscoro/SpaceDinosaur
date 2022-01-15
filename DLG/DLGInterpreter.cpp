#include "DLGInterpreter.h"

DLGInterpreter::DLGInterpreter(DLGCache* cache)
{
    this->cache = cache;
}

DLGInterpreter::~DLGInterpreter()
{
}

Dialog DLGInterpreter::readDLG(std::string filePath, bool cacheInLookupTable, bool cacheDLG)
{
    if (filePath.substr(filePath.find_last_of('.')) != ".dlg")
    {
        throw DLGParseException("File path does not contain correct file extension.");
    }

    
    FileReader reader = FileReader(filePath);
    std::vector<std::string> lines = reader.getLines();

    DLGLexer lexer = DLGLexer();
    std::vector<Instruction> instructions;
    std::string oneLine = "";
    for(std::string line : lines)
    {
        oneLine += line + " ";
    }

    std::vector<DLGToken> tokens = lexer.getTokensFromString(oneLine);

    if (tokens.size() == 0)
    {
        throw DLGParseException("No tokens found.");
    }

    DLGParser parser = DLGParser();
    Dialog dialog = parser.parseTokens(tokens);
    
    return dialog;
}

void DLGInterpreter::setDLGCache(DLGCache* cache)
{
    this->cache = cache;
}