#pragma once
#include "Character.h"
#include "Logger.h"

class BattleController
{
public:
    BattleController(Logger* logger);
    void Attack(Character* base, Character* other);
    void Defend(Character* base);
    void Heal(Character* base);
private:
    Logger* _logger;
};
