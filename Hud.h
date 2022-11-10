#pragma once
#include <string>

#include "Logger.h"

class Hud
{
public:
    Hud(Logger* logger);
    std::string AskPlayerName();
    int AwaitSelectAction();
private:
    Logger* _logger;
};
