#include <iostream>

#include "Game.h"
#include "Console.h"

Game::Game()
{
    
}

Game::~Game()
{
    // Destroy the game
    // ...
}

void Game::run()
{
    Console console;
    
    console.clear();
    console.wait(200);
    console.write("\n\n\t\t\t               __\n\t\t\t              / _)\n\t\t\t     _/\\/\\/\\_/ /\n\t\t\t   _|         /\n\t\t\t _|  (  | (  |\n\t\t\t/__.-'|_|--|_|  \n\t\t\t\t\t", 0, false);
    console.wait(200);
    console.write("maybe i am god", 1, false);
    console.wait(1500);
    console.write("\n\n   _____ _____        _____ ______   _____ _____ _   _  ____   _____        _    _ _____  \n  / ____|  __ \\ /\\   / ____|  ____| |  __ \\_   _| \\ | |/ __ \\ / ____|  /\\  | |  | |  __ \\ \n | (___ | |__) /  \\ | |    | |__    | |  | || | |  \\| | |  | | (___   /  \\ | |  | | |__) |\n  \\___ \\|  ___/ /\\ \\| |    |  __|   | |  | || | | . ` | |  | |\\___ \\ / /\\ \\| |  | |  _  / \n  ____) | |  / ____ \\ |____| |____  | |__| || |_| |\\  | |__| |____) / ____ \\ |__| | | \\ \\ \n |_____/|_| /_/    \\_\\_____|______| |_____/_____|_| \\_|\\____/|_____/_/    \\_\\____/|_|  \\_\\\n\n\n", 0, true);
    

    while (true)
    {

    }
}

