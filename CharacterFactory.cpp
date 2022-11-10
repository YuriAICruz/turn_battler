#include "CharacterFactory.h"

CharacterFactory::CharacterFactory(Logger* logger)
{
    _logger = logger;
}

Character* CharacterFactory::Create(std::string name, int level)
{
    auto character = new Character(name, 1);
    return character;
}
