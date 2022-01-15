#include "DLGToken.h"

DLGToken::DLGToken(Kind kind, std::string value)
{
    this->kind = kind;
    this->value = value;
}

DLGToken::~DLGToken()
{
}

DLGToken::Kind DLGToken::getKind()
{
    return kind;
}

std::string DLGToken::getValue()
{
    return value;
}

bool DLGToken::isKind(Kind kind)
{
    return this->kind == kind;
}