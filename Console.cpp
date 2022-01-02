#include "Console.h"

Console::Console()
{
}

Console::~Console()
{
}

void Console::write(std::string text, int speed, bool newLine)
{   
    if (speed < 0) return;
    else if (speed == 0)
    {
        if (newLine)
            std::cout << text << std::endl;
        else
            std::cout << text;
    }
    else
        for(char& c : text)
        {
            std::cout << c;
            std::this_thread::sleep_for(std::chrono::milliseconds(speed*100));
            std::cout << std::flush;
        }
        if (newLine) std::cout << std::endl;
}

void Console::clear()
{
    std::cout << "\033[2J\033[1;1H";
    std::cout << std::flush;
}

void Console::wait(int time)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}