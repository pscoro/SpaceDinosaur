#pragma once

#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

#include "Definitions.h"
#include "Exception/Exception.h"

class Console {
public:
    // Constructor
    Console();

    // Destructor
    ~Console();

    void write(std::string text, int speed=0, bool newLine=false);
    void write(Exception exception);
    void exception(Exception exception);

    void wait(int time);

    std::pair<std::chrono::seconds, std::string> prompt(std::string prompt = "");

    void setName(std::string name);

    void clear();
private:
    std::string playerName = "---";
    std::string m_prompt = "[" + playerName + "]$ ";
};