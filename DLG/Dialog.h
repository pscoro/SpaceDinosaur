#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <chrono>

#include "Console.h"
#include "Player.h"
#include "GameObject.h"
#include "DialogResponse.h"
#include "DialogManager.h"
#include "Command.h"

class Dialog
{
public:

    Dialog(std::string dialogName, DialogManager* manager, std::vector<DialogResponse> dialogResponses);

    /*--------------------------------------------------------------------------------*/

    static DialogResponse MainMenu();
    
    static DialogResponse StartGame();
    static DialogResponse LoadGame();
    static DialogResponse GameOptions();
    static DialogResponse GameCredits();
    static DialogResponse GameQuit();

    static DialogResponse PlayerDead();
    static DialogResponse GamePaused();





    /*--------------------------------------------------------------------------------*/

private:
    std::string rawDialog;
    std::string dialogName;
    std::vector<DialogResponse> dialogResponses;
    DialogManager* manager;
};