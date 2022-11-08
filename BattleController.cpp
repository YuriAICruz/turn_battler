#include "BattleController.h"

BattleController::BattleController()
{
}

void BattleController::Attack(Character* base, Character* other)
{
    base->ReleaseDefense();
    other->Damage(base->Attack);
}

void BattleController::Defend(Character* base)
{
    base->Defend();
}

void BattleController::Heal(Character* base)
{
    base->Heal();
}
