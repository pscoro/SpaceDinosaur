# pragma once

#include <iostream>

class Player
{
public:
    // Constructor
    Player();

    // Destructor
    ~Player();

private:
    // The player's name
    std::string name;

    // The player's score
    int score;
};