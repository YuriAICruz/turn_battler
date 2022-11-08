#pragma once
#include <string>

#include "Character.h"

class CharacterFactory
{
public:
    CharacterFactory();
    Character* Create(std::string name, int level);
};
