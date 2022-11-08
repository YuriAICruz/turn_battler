#include "Character.h"

#include <iostream>
#include <string>


Character::Character(std::string name, int level)
{
    _name = name;
    _currentLevel = level;
    _hp = level * 10;
    _attack = level * 2;
    _defending = false;
}

void Character::Hello()
{
    std::cout << "Hello from " + _name + " my level is " + std::to_string(_currentLevel) + " HP: " + std::to_string(_hp);
}

void Character::Status()
{
    std::cout << "Character " + _name + " Lv: " + std::to_string(_currentLevel) + " HP: " + std::to_string(_hp);
}

void Character::Damage(int attack)
{
    _hp -= static_cast<int>(attack * (_defending ? 0.5 : 1));
}

void Character::Defend()
{
    _defending = true;
}
void Character::ReleaseDefense()
{
    _defending = false;
}

void Character::Heal()
{
    _defending = false;
}
