#include "FileReader.h"

FileReader::FileReader(std::string filePath)
{
    this->filePath = filePath;
    this->type = filePath.substr(filePath.find_last_of(".") + 1);
}

FileReader::~FileReader()
{
}

void FileReader::setFilePath(std::string filePath)
{
    this->filePath = filePath;
}

void FileReader::readFile()
{
    std::ifstream file(this->filePath);
    std::string line;
    while (std::getline(file, line))
    {
        this->fileContent += line + "\n";
    }
    file.close();
}

std::string FileReader::getFilePath()
{
    return this->filePath;
}

std::string FileReader::getFileContent()
{
    return this->fileContent;
}

std::string FileReader::getLine(int lineNumber)
{
    std::string line;
    std::stringstream ss(this->fileContent);
    for (int i = 0; i < lineNumber; i++)
    {
        std::getline(ss, line);
    }
    return line;
}

std::string FileReader::getType()
{
    return this->type;
}

std::vector<std::string> FileReader::getLines()
{
    std::vector<std::string> lines;
    std::string line;
    std::stringstream ss(this->fileContent);
    while (std::getline(ss, line))
    {
        lines.push_back(line);
    }
    return lines;
}

std::vector<std::vector<std::string>> FileReader::getCSV()
{
    std::vector<std::vector<std::string>> csv;
    std::vector<std::string> lines = this->getLines();
    for (std::string line : lines)
    {
        std::vector<std::string> tokens;
        std::stringstream ss(line);
        std::string token;
        while (std::getline(ss, token, ','))
        {
            tokens.push_back(token);
        }
        csv.push_back(tokens);
    }
    return csv;
}