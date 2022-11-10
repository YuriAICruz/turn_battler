#include <iostream>

#include "BattleController.h"
#include "CharacterFactory.h"
#include "Hud.h"
#include "Logger.h"

std::string name;

int main(int argc, char* argv[])
{
    auto logger = new Logger();
    auto hud = new Hud(logger);
    auto factory = new CharacterFactory(logger);
    auto battle = new BattleController(logger);

    auto name = hud->AskPlayerName();

    auto character = factory->Create(name, 1);
    logger->Say(character->Hello());
    auto enemy = factory->Create("Enemy", 1);
    logger->Say(enemy->Hello());

    int turn = 0;
    while (enemy->Hp > 0 && character->Hp > 0)
    {
        logger->Say("Current turn [" + std::to_string(turn + 1) + "]");
        auto action = hud->AwaitSelectAction();

        if (action <= 0 || action > 3)
        {
            continue;
        }

        switch (action)
        {
        case 1:
            battle->Attack(character, enemy);
            break;
        case 2:
            battle->Defend(character);
            break;
        case 3:
            battle->Heal(character);
            break;
        default: throw std::logic_error("Function not yet implemented");
        }

        battle->Attack(enemy, character);
        turn ++;
    }

    logger->Say("Battle Ended!");
    logger->Say(character->Status() + " - " + enemy->Status());

    return 0;
}
