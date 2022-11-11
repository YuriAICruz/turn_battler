#include "Character.h"
#include <string>
#include <utility>

Character::Character(std::string name, const int level)
{
    name_ = std::move(name);
    currentLevel_ = level;
    maxHp_ = hp_ = level * 10;    
    attack_ = level * 2;
    defending_ = false;
}

std::string Character::hello() const
{
    return  "Hello from " + name_ + " my level is " + std::to_string(currentLevel_) + " HP: " + std::to_string(hp_);
}

std::string Character::status() const
{
   return  "Character " + name_ + " Lv: " + std::to_string(currentLevel_) + " HP: " + std::to_string(hp_)+"/"+std::to_string(maxHp_);
}

void Character::damage(const int attack)
{
    hp_ -= static_cast<int>(attack * (defending_ ? 0.5 : 1));
}

void Character::defend()
{
    defending_ = true;
}
void Character::releaseDefense()
{
    defending_ = false;
}

void Character::heal()
{
    defending_ = false;
    hp_ = std::min(maxHp_, hp_ + 5);
}
