#include "DialogResponse.h"

DialogResponse::DialogResponse(std::map<std::chrono::seconds, std::string> response)
{
    this->response = response;
}

DialogResponse::~DialogResponse()
{
}

std::vector<std::string> DialogResponse::toVector()
{
    std::vector<std::string> result;
    for (auto it = response.begin(); it != response.end(); ++it)
    {
        result.push_back(it->second);
    }
    return result;
}

std::map<std::chrono::seconds, std::string> DialogResponse::withTimestamps()
{
    return response;
}

std::string DialogResponse::toString(bool timestamps)
{
    std::string result;
    for (auto it = response.begin(); it != response.end(); ++it)
    {
        if (timestamps)
        {
            result += std::to_string(it->first.count()) + ": " + it->second + "\n";
        }
        else
        {
            result += it->second + "\n";
        }
    }
    return result;
}