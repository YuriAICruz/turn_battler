#include "Logger.h"

#include <iostream>

Logger::Logger() = default;

std::string Logger::ask(std::string question)
{
    std::string response;
    std::cout << question;
    std::cin >> response;
    return response;
}

void Logger::say(const std::string& title)
{
    std::cout << title + "\n";
}

void Logger::showStatus(const Character* character)
{
    std::cout << character->status() + "\n";
}
