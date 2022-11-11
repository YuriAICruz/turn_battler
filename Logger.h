#pragma once
#include <string>

#include "Character.h"

class Logger
{
public:
    Logger();
    static std::string ask(std::string question);
    static void say(const std::string& title);
    static void showStatus(const Character* character);
};
