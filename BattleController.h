#pragma once
#include "Character.h"

class BattleController
{
public:
    BattleController();
    void Attack(Character* base, Character* other);
    void Defend(Character* base);
    void Heal(Character* base);
};
