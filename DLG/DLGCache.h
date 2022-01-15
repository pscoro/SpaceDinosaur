#pragma once

#include "../Definitions.h"
#include "Dialog.h"

class DLGCache
{
public:
    DLGCache();
    ~DLGCache();

    Dialog* getDialog(std::string name);
    void addDialog(std::string name, std::string filePath, Dialog* dialog);
    void removeDialog(std::string name);

    void setDialogFilePath(std::string name, std::string filePath);
    std::string getDialogFilePath(std::string name);

    void updateCache();

private:
    void save();
    void load();

private:
    std::vector<std::tuple<std::string, std::string, Dialog*>> dialogs; // dialogName, filePath, dialog
};
