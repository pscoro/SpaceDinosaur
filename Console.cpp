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

std::pair<std::chrono::seconds, std::string> Console::prompt(std::string prompt)
{
    if(prompt != "") {
        write(prompt, 0, true);
    }
    std::cout << m_prompt;
    std::cout << std::flush;

    std::string input;
    std::cin >> input;
    const auto p1 = std::chrono::system_clock::now();
    const auto time = std::chrono::duration_cast<std::chrono::seconds>(
                   p1.time_since_epoch());
    
    return std::make_pair(time, input);
}

void Console::setName(std::string name)
{
    playerName = name;
    m_prompt = "[" + playerName + "]$ ";
}

void Console::exception(Exception exception)
{
    std::string msg = exception.getPrompt() + exception.getMessage();
    write((msg), 0, true);
}

void Console::write(Exception exception)
{
    std::string msg = exception.getPrompt() + exception.getMessage();
    write((msg), 0, true);
}