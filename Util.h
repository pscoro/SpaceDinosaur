#pragma once

#include "../Definitions.h"


class Util
{
public:
    template <typename Out>
    static void split(const std::string &s, char delim, Out result);
    static std::vector<std::string> split(const std::string &s, char delim)
};