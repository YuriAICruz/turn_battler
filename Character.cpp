#include "Character.h"

#include <iostream>
#include <string>

std::string _name;
int _currentLevel;

Character::Character(std::string name, int level)
{
    _name = name;
    _currentLevel = level;
}

void Character::Hello()
{
    std::cout << "Hello from " + _name + " my level is " + std::to_string(_currentLevel);
}
