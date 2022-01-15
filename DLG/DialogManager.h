#pragma once

#include "Dialog.h"
#include "Definitions.h"

class DialogManager
{
public:
    DialogManager();
    ~DialogManager();

    void start(bool newGame);
    void stop();

    Dialog* getCurrentDialog();
    Dialog* getNextDialog();

    void pushDialog(Dialog* dialog);
    void enqueueDialog(Dialog* dialog);

private:
    void init(bool newGame);
    void runDialog();
    void save();
    void load();

private:
    std::vector<Dialog*> currentDialogStack;
    std::vector<Dialog*> enqueuedDialogs;
};