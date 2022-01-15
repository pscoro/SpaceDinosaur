#include "Dialog.h"

typedef std::pair<std::chrono::seconds, std::string> Message;

DialogResponse Dialog::MainMenu()
{
    std::map<std::chrono::seconds, std::string> response;
    
    Console console;
    
    console.clear();
    console.wait(200);
    console.write("\n\n\t\t\t               __\n\t\t\t              / _)\n\t\t\t     _/\\/\\/\\_/ /\n\t\t\t   _|         /\n\t\t\t _|  (  | (  |\n\t\t\t/__.-'|_|--|_|  \n\t\t\t\t\t", 0, false);
    console.write("maybe i am god.", 1, false);
    console.wait(1500);
    console.write("\n\n   _____ _____        _____ ______   _____ _____ _   _  ____   _____        _    _ _____  \n  / ____|  __ \\ /\\   / ____|  ____| |  __ \\_   _| \\ | |/ __ \\ / ____|  /\\  | |  | |  __ \\ \n | (___ | |__) /  \\ | |    | |__    | |  | || | |  \\| | |  | | (___   /  \\ | |  | | |__) |\n  \\___ \\|  ___/ /\\ \\| |    |  __|   | |  | || | | . ` | |  | |\\___ \\ / /\\ \\| |  | |  _  / \n  ____) | |  / ____ \\ |____| |____  | |__| || |_| |\\  | |__| |____) / ____ \\ |__| | | \\ \\ \n |_____/|_| /_/    \\_\\_____|______| |_____/_____|_| \\_|\\____/|_____/_/    \\_\\____/|_|  \\_\\\n\n\n", 0, true);
    
    console.wait(500);
    console.write("\n\tMAIN MENU\n", 0, true);
    console.wait(500);

    console.write("\tWhat would you like to do?", 0, true);
    console.write("\t1. Start a new game", 0, true);
    console.write("\t2. Load a saved game", 0, true);
    console.write("\t3. Options", 0, true);
    console.write("\t4. Credits", 0, true);
    console.write("\t5. Quit", 0, true);


    while (true) {
        Message choice = console.prompt();
        response.insert(choice);

        if (choice.second == "1") {
            Dialog::StartGame();
            break;
        } else if (choice.second == "2") {
            Dialog::LoadGame();
            break;
        } else if (choice.second == "3") {
            //Dialog::GameOptions();
            break;
        } else if (choice.second == "4") {
            //Dialog::GameCredits();
            break;
        } else if (choice.second == "5") {
            //Dialog::GameQuit();
            break;
        } else {
            continue;
        }
    }

    return DialogResponse(response);
}

DialogResponse Dialog::StartGame() {
    std::map<std::chrono::seconds, std::string> response;
    
    Console console;
    
    console.clear();
    console.write("\n\n\t\t\t               __\n\t\t\t              / _)\n\t\t\t     _/\\/\\/\\_/ /\n\t\t\t   _|         /\n\t\t\t _|  (  | (  |\n\t\t\t/__.-'|_|--|_|  \n\t\t\t\t\t", 0, false);

    Message name = console.prompt("What is my name?");
    response.insert(name);
    console.setName(name.second);
    console.wait(400);

    console.write("\tok now i remember.\n", 0, true);
    console.wait(300);

    console.write("\r\ti guess i should wake up now...", 1, true);
    console.wait(300);
    console.write("\r\ti dont know where i am", 1, true);

    Message msg = console.prompt("[HELP]$ Let's test out those motor commands. Try looking around.");
    response.insert(msg);
    int count = 0;
    while (count < 5) {
        Command cmd = Command(msg.second);
        cmd.run();

        if (cmd.containsSynonymFor("look") || cmd.containsSynonymFor("move") || cmd.containsSynonymFor("jump")) 
            count++;
        
        response.insert(msg);
    }
    

    return DialogResponse(response);
}

DialogResponse Dialog::LoadGame() {
    
}