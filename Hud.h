#pragma once
#include <string>

#include "Logger.h"

class Hud
{
public:
    explicit Hud(Logger* logger);
    std::string askPlayerName() const;
    int awaitSelectAction() const;
private:
    Logger* logger_;
};
