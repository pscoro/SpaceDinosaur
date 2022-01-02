#pragma once

#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

class Console {
public:
    // Constructor
    Console();

    // Destructor
    ~Console();

    void write(std::string text, int speed=0, bool newLine=false);

    void wait(int time);

    void clear();
};