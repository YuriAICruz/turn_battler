#pragma once
#include <string>

#include "Character.h"
#include "Logger.h"

class CharacterFactory
{
public:
    CharacterFactory(Logger* logger);
    Character* Create(std::string name, int level);
private:
    Logger* _logger;
};
