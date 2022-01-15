#include "DLGParser.h"

DLGParser::DLGParser()
{
}

DLGParser::~DLGParser()
{
}

Dialog* DLGParser::parseTokens(std::vector<DLGToken> tokens) {
    bool inDialog = false;
    bool inStatement = false;
    int blockScope = 0;
    Dialog* dialog = nullptr;
    
    for(DLGToken token : tokens) {
        if(!inDialog){
            if (token.isKind(DLGToken::Kind::Identifier)) {
                inDialog = true;
                dialog = new Dialog(token.getValue());
            }
            else {
                throw DLGParseException("Invalid Dialog identifier.");
            }
        } else {
            if (token.isKind(DLGToken::Kind::DialogClosure)) {
                inDialog = false;
            } else if (token.isKind(DLGToken::Kind::BlockClosure)) {
                if (blockScope <= 0) {
                    throw DLGParseException("Unexpected block closure. '" + token.getValue() + "'");
                }
                else blockScope--;
            } else if (token.isKind(DLGToken::Kind::Identifier)) {
                if (token.getValue() == "while") {
                    inStatement = true;
                    blockScope++;
                }
                else if (token.getValue() == "if") {
                    inStatement = true;
                    blockScope++;
                }
                else if (token.getValue() == "else") {
                    inStatement = true;
                    blockScope++;
                }
                else if (token.getValue() == "elif") {
                    inStatement = true;
                    blockScope++;
                }
                else if (token.getValue() == "true") {
                    
                }
                else if (token.getValue() == "false") {
                    
                }
                else if (token.getValue() == "break") {
                    
                }
                else if (token.getValue() == "continue") {
                    
                }
                else if (token.getValue() == "next") {
                    inStatement = true;
                }
                else if (token.getValue() == "write") {
                    inStatement = true;
                }
                else if (token.getValue() == "prompt") {
                    inStatement = true;
                }
                else if (token.getValue() == "wait") {
                    inStatement = true;
                }
                else if (token.getValue() == "clear") {
                    inStatement = true;
                }
                else if (token.getValue() == "respond") {
                    inStatement = true;
                }
                else if (token.getValue() == "set") {
                    
                }
                else if (token.getValue() == "target") {
                    
                }
                else if (token.getValue() == "self") {
                    
                } 
            } else if (inStatement) {

            }
            else {
                throw DLGParseException("Invalid token. '" + token.getValue() + "'");
            }
        }
    }
}