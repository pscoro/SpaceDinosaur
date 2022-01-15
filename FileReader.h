#pragma once

#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>

class FileReader
{
public:
    FileReader(std::string filePath);
    ~FileReader();

    void setFilePath(std::string filePath);

    void readFile();

    std::string getFilePath();
    std::string getFileContent();
    std::string getLine(int lineNumber);
    std::string getType();

    std::vector<std::string> getLines();
    std::vector<std::vector<std::string>> getCSV();
private:
    std::string filePath;
    std::string fileContent;
    std::string type;
};