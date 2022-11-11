#pragma once
#include <string>

#include "Character.h"
#include "Logger.h"

class CharacterFactory
{
public:
    explicit CharacterFactory(Logger* logger);
    static Character* create(std::string name, int level);
private:
    Logger* logger_;
};
