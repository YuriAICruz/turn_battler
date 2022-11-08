#include <iostream>

#include "BattleController.h"
#include "CharacterFactory.h"
#include "Hud.h"

std::string name;

int main(int argc, char* argv[])
{
    auto hud = new Hud();
    auto factory = new CharacterFactory();
    auto battle = new BattleController();

    auto name = hud->AskPlayerName();

    auto character = factory->Create(name, 1);
    character->Hello();
    auto enemy = factory->Create("Enemy", 1);
    enemy->Hello();

    while (enemy->Hp > 0 || character->Hp > 0)
    {
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
        }

        battle->Attack(enemy, character);
    }
    
    character->Status();
    enemy->Status();

    return 0;
}
