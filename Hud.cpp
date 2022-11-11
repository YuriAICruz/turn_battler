#include "Hud.h"

#include <iostream>

#include "Character.h"


Hud::Hud(Logger* logger)
{
    logger_ = logger;
}

std::string Hud::askPlayerName() const
{
    std::string name;
    name = logger_->ask("Enter Name:");
    return name;
}

int Hud::awaitSelectAction() const
{
    const int action = stoi(logger_->ask("Select Action\n1: Attack 2:Defend 3:Heal\n"));
    
    if(action <= 0)
    {
        return -1;
    }

    return action;
}
