#include <iostream>
#include "Character.h"

std::string name;

int main(int argc, char* argv[])
{
    std::cout << "Enter Name:";
    std::cin >> name;

    auto character = new Character(name, 1);
    character->Hello();

    return 0;
}
