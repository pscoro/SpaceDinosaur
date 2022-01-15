#pragma once

#include "../Definitions.h"

class DLGToken {
public:
    enum class Kind {
        Number, // int, float, signed etc
        Identifier, // 
        String,
        Operator,
        LeftBracket,
        RightBracket,
        BlockClosure,
        DialogClosure
    };
    DLGToken(Kind kind, std::string value);
    ~DLGToken();

    Kind getKind();

    bool isKind(Kind kind);

    std::string getValue();


private:
    Kind kind;
    std::string value;
};
