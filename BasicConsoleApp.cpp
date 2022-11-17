#include <iostream>

#include "BattleController.h"
#include "CharacterFactory.h"
#include "Event.h"
#include "EventCallback.h"
#include "Hud.h"
#include "Logger.h"

std::string name;

int main(int argc, char* argv[])
{
    const auto logger = new Logger();
    const auto hud = new Hud(logger);
    const auto factory = new CharacterFactory(logger);
    const auto battle = new BattleController(logger);

    const auto character = factory->create(hud->askPlayerName(), 1);
    logger->say(character->hello());
    const auto enemy = factory->create("Enemy", 1);
    logger->say(enemy->hello());

    auto event = new EventCallback<Character>(character, &Character::defend);
    auto eventB = new EventCallback<Character>(character, &Character::heal);
    auto eventManager = new Event();
    eventManager->addListener(event);
    eventManager->addListener(eventB);
    eventManager->fire();

    int turn = 0;
    while (enemy->Hp > 0 && character->Hp > 0)
    {
        logger->say("Current turn [" + std::to_string(turn + 1) + "]");
        const auto action = hud->awaitSelectAction();

        if (action <= 0 || action > 3)
        {
            continue;
        }

        switch (action)
        {
        case 1:
            battle->attack(character, enemy);
            break;
        case 2:
            battle->defend(character);
            break;
        case 3:
            battle->heal(character);
            break;
        default: throw std::logic_error("Function not yet implemented");
        }

        battle->attack(enemy, character);
        turn ++;
    }

    logger->say("Battle Ended!");
    logger->say(character->status() + " - " + enemy->status());

    return 0;
}
