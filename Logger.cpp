#include "Logger.h"

#include <iostream>

Logger::Logger()
{
}

std::string Logger::Ask(std::string question)
{
    std::string response;
    std::cout << question;
    std::cin >> response;
    return response;
}

void Logger::Say(const std::string& title)
{
    std::cout << title + "\n";
}

void Logger::ShowStatus(Character* character)
{
    std::cout << character->Status() + "\n";
}
