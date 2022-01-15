#pragma once

#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <sstream>

#include "Command.h"
#include "Console.h"
#include "Player.h"
#include "GameObject.h"
#include "DialogResponse.h"

class Command
{
public:
    Command(std::string command);
    ~Command();

    void run();

    static bool areSynonyms(std::string word, std::string synonym);

private:
    bool doCommonCommands();
    std::vector<std::string> tokenize(std::string command);

private:
    static std::map<std::string, std::vector<std::string>> synonyms;
    std::vector<std::string> tokens;
    std::string command;
};

