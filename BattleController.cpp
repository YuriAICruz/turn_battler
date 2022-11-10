#include "BattleController.h"

BattleController::BattleController(Logger* logger)
{
    _logger = logger;
}

void BattleController::Attack(Character* base, Character* other)
{
    base->ReleaseDefense();
    other->Damage(base->Attack);
    _logger->Say(base->Name + " attacked " + other->Name);
    _logger->ShowStatus(other);
}

void BattleController::Defend(Character* base)
{
    _logger->Say(base->Name + " defending");
    base->Defend();
}

void BattleController::Heal(Character* base)
{
    base->Heal();
    _logger->ShowStatus(base);
}
