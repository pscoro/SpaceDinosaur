#include "DLGLexer.h"

DLGLexer::DLGLexer()
{
}

DLGLexer::~DLGLexer()
{
}

std::vector<DLGToken> DLGLexer::getTokensFromString(std::string raw)
{
    Console console;

    std::vector<DLGToken> tokens = std::vector<DLGToken>();

    std::vector<std::string> parts;
    std::string remaining = raw;
    std::string part;
    int quoteCount = 0;

    while(remaining.find("\"") != std::string::npos)
    {
        quoteCount++;
        if (remaining.find("\"") != 0) {
            part = remaining.substr(0, remaining.find("\""));
            parts.push_back(part);
            remaining = remaining.substr(remaining.find("\""));
        } 
        part = remaining.substr(0, remaining.substr(1).find("\"")+1);
        remaining = remaining.substr(remaining.substr(1).find("\"")+1);
        parts.push_back(part);
    }
    parts.push_back(remaining);

    for (std::string part : parts)
    {
        if (part.length() == 0) {
            throw DLGParseException("Empty DLG token found.");
        }
        else if (part.find("\"") == 0)
        {
            tokens.push_back(DLGToken(DLGToken::Kind::String, part));
        } else {
            std::vector<std::string> words = Util::split(part, ' ');
            for(std::string word : words)
            {
                word = word.replace(word.find("\t"), 1, "");
                word = word.replace(word.find("\n"), 1, "");
                word = word.replace(word.find("\r"), 1, "");

                if(std::regex_match(word, std::regex(".*[ \t\n\r].*"))) {
                    throw DLGParseException("Invalid token, contains whitespace: '" + word + "'");
                } else if (std::regex_match(word, std::regex("^[a-zA-Z0-9]+$"))) {
                    tokens.push_back(DLGToken(DLGToken::Kind::Identifier, word));
                } else if (std::regex_match(word, std::regex("^-?[0-9]+(\.[0-9]+)?$"))) {
                    tokens.push_back(DLGToken(DLGToken::Kind::Number, word));
                } else if (std::regex_match(word, std::regex("^(<<|>>|==|<=|>=|!=|+=|-=|*=|/=|[\+\-\*\/\[\]\{\}\<\>\=\!\%\^\&\|\~\?])$"))) {
                    tokens.push_back(DLGToken(DLGToken::Kind::Operator, word));
                } else if (word == "}") {
                    tokens.push_back(DLGToken(DLGToken::Kind::BlockClosure, word));
                } else if (word == "]") {
                    tokens.push_back(DLGToken(DLGToken::Kind::DialogClosure, word));
                } else if (word == "(") {
                    tokens.push_back(DLGToken(DLGToken::Kind::LeftBracket, word));
                } else if (word == ")") {
                    tokens.push_back(DLGToken(DLGToken::Kind::RightBracket, word));
                } else {
                    throw DLGParseException("Invalid token: '" + word + "'");
                }
            }
            
        }
    }

    return tokens;
}