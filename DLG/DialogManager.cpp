#include "DialogManager.h"

DialogManager::DialogManager()
{
}

DialogManager::~DialogManager()
{
    this->currentDialogStack.clear();
    this->enqueuedDialogs.clear();

}

void DialogManager::start(bool newGame)
{
    this->init(newGame);
    while (this->getCurrentDialog() != nullptr)
    {
        this->runDialog();
    }
    this->save();
    this->stop();
}

void DialogManager::stop()
{

}

void DialogManager::init(bool newGame)
{
    if (!newGame) {
        this->load();
    } else {
        // do inits
        this->enqueueDialog(new Dialog());
    }
}

void DialogManager::runDialog()
{
}

void DialogManager::save()
{
}

void DialogManager::load()
{
}

void DialogManager::pushDialog(Dialog* dialog)
{
}

void DialogManager::enqueueDialog(Dialog* dialog)
{
}

Dialog* DialogManager::getCurrentDialog()
{
    return nullptr;
}

Dialog* DialogManager::getNextDialog()
{
    return nullptr;
}