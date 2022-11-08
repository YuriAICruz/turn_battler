#include "Hud.h"

#include <iostream>

#include "Character.h"

std::string Hud::AskPlayerName()
{
    std::cout << "Enter Name:";
    std::string name;
    std::cin >> name;
    return name;
}

int Hud::AwaitSelectAction()
{
    std::cout << "Select Action\n1: Attack 2:Defend 3:Heal";
    std::string actionStr;
    std::cin >> actionStr;

    int action = stoi(actionStr);
    
    if(action <= 0)
    {
        return -1;
    }

    return action;
}
