#pragma once

#include <iostream>
#include <chrono>
#include <map>
#include <vector>

class DialogResponse
{
public:
    DialogResponse(std::map<std::chrono::seconds, std::string> response);
    ~DialogResponse();

    std::vector<std::string> toVector();
    std::map<std::chrono::seconds, std::string> withTimestamps();
    std::string toString(bool timestamps = false);
private:
    std::map<std::chrono::seconds, std::string> response;
};