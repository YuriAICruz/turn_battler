#pragma once
#include "Character.h"
#include "Logger.h"

class BattleController
{
public:
    explicit BattleController(Logger* logger);
    void attack(Character* base, Character* other) const;
    void defend(Character* base) const;
    void heal(Character* base) const;
private:
    Logger* logger_;
};
