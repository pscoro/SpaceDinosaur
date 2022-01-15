#include "Command.h"

Command::Command(std::string command)
{
    this->tokens = this->tokenize(command);
    this->command = command;
}

std::vector<std::string> Command::tokenize(std::string command)
{
    std::vector<std::string> result;
    std::stringstream ss(command);
    std::string token;
    while (std::getline(ss, token, ' '))
    {
        result.push_back(token);
    }
    return result;
}

Command::~Command()
{
}

void Command::run()
{
    if(this->doCommonCommands())
    {
        // Do something on top
    }
}

bool Command::doCommonCommands()
{
    Console console;
    if(this->tokens[0] == "help")
    {

        std::string helpMsg = "HELP MENU:\n";
        helpMsg += "help - Displays this menu\n";
        helpMsg += "exit - Exits the game\n";
        helpMsg += "save - Saves the game\n";
        helpMsg += "load - Loads the game\n";
        helpMsg += "inventory - Displays your inventory\n";
        helpMsg += "look - Displays the current room\n";
        helpMsg += "look at <object> - Displays the object\n";
        helpMsg += "look in <object> - Displays the object\n";
        helpMsg += "take <object> - Adds the object to your inventory\n";
        helpMsg += "drop <object> - Removes the object from your inventory\n";
        helpMsg += "clear - clear screen\n";
        helpMsg += "credits - show credits\n";
        helpMsg += "-----------------------------------------------------\n";
        helpMsg += "Type the corresponding number to access the tutorial:\n";
        helpMsg += "[1] - Basic\t[2] - Advanced\t[3] - Machines\t[4] - What's out there?\t[5] - End Game\n";
        helpMsg += "-----------------------------------------------------\n";
        helpMsg += "You can also type the following character to learn more about:\n";
        helpMsg += "[a] - Armor\t[b] - Book\t[c] - Clothes\t[d] - Door\t[e] - Enemy\t[f] - Food\t[g] - Gold\t[h] - Health Potion\t[i] - Item\t[j] - Key\t[k] - Key Item\t[l] - Light\t[m] - Map\t[n] - NPC\t[o] - Object\t[p] - Potion\t[q] - Quest\t[r] - Room\t[s] - Scroll\t[t] - Sword\t[u] - Treasure\t[v] - Vial\t[w] - Weapon\n";

        console.write(helpMsg, 0, true);
        typedef std::pair<std::chrono::seconds, std::string> Message;
        while(true) {
            Message msg = console.prompt("[HELP]$ Enter option; 'q' to quit");
            if(msg.second == "q")
            {
                break;
            }
            else if (msg.second == "a")
            {
                console.write("Option 'a' selected", 0, true);
            }
            else if (msg.second == "b")
            {
                console.write("Option 'b' selected", 0, true);
            }
            else
            {
                console.write("Invalid option", 0, true);
            }
        }
    }
    else if(this->tokens[0] == "quit" && this->tokens.size() == 1)
    {
        // Game::getInstance()->save();
        console.write("[SYSTEM]$ Quitting game...", 1, true);
        // Game::exit();
        return false;
    }
    return true;
}

bool Command::areSynonyms(std::string word, std::string synonym)
{
    // std::map<std::string, std::vector<std::string>>::iterator it;

    // for (it = symbolTable.begin(); it != symbolTable.end(); it++)
    // {
    //     std::cout << it->first    // string (key)
    //             << ':'
    //             << it->second   // string's value 
    //             << std::endl;
    // }
    return false;
}