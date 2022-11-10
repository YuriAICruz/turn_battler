#pragma once
#include <string>

#include "Character.h"

class Logger
{
public:
    Logger();
    std::string Ask(std::string question);
    void Say(const std::string& title);
    void ShowStatus(Character* character);
};
