#include "CharacterFactory.h"

CharacterFactory::CharacterFactory()
{
}

Character* CharacterFactory::Create(std::string name, int level)
{
    auto character = new Character(name, 1);
    return character;
}
