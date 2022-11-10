#include "Hud.h"

#include <iostream>

#include "Character.h"


Hud::Hud(Logger* logger)
{
    _logger = logger;
}

std::string Hud::AskPlayerName()
{
    std::string name;
    name = _logger->Ask("Enter Name:");
    return name;
}

int Hud::AwaitSelectAction()
{
    std::string actionStr;
    actionStr = _logger->Ask("Select Action\n1: Attack 2:Defend 3:Heal\n");

    int action = stoi(actionStr);
    
    if(action <= 0)
    {
        return -1;
    }

    return action;
}
