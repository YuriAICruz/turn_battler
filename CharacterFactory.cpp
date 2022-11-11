#include "CharacterFactory.h"

#include <utility>

CharacterFactory::CharacterFactory(Logger* logger)
{
    logger_ = logger;
}

Character* CharacterFactory::create(std::string name, int level)
{
    const auto character = new Character(std::move(name), 1);
    return character;
}
