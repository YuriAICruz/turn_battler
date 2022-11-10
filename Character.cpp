#include "Character.h"
#include <string>

Character::Character(std::string name, int level)
{
    _name = name;
    _currentLevel = level;
    _maxHp = _hp = level * 10;    
    _attack = level * 2;
    _defending = false;
}

std::string Character::Hello()
{
    return  "Hello from " + _name + " my level is " + std::to_string(_currentLevel) + " HP: " + std::to_string(_hp);
}

std::string Character::Status()
{
   return  "Character " + _name + " Lv: " + std::to_string(_currentLevel) + " HP: " + std::to_string(_hp)+"/"+std::to_string(_maxHp);
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
    _hp = std::min(_maxHp, _hp + 5);
}
