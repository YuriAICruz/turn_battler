#include "BattleController.h"

BattleController::BattleController(Logger* logger)
{
    logger_ = logger;
}

void BattleController::attack(Character* base, Character* other) const
{
    base->releaseDefense();
    other->damage(base->Attack);
    logger_->say(base->Name + " attacked " + other->Name);
    logger_->showStatus(other);
}

void BattleController::defend(Character* base) const
{
    logger_->say(base->Name + " defending");
    base->defend();
}

void BattleController::heal(Character* base) const
{
    base->heal();
    logger_->showStatus(base);
}
