#pragma once
#include <xstring>

#include "PropertyExtension.h"

class Character
{
public:
    Character(std::string name, int level);
    void Hello();
    void Status();
    void Damage(int attack);
    void Defend();
    void ReleaseDefense();
    void Heal();
    
    READONLY_PROPERTY(int, Hp);
    READONLY_PROPERTY(int, Attack);
    GET(Hp) 
    { 
        return _hp; 
    }
    GET(Attack) 
    { 
        return _attack;
    }
private:
    std::string _name;
    int _currentLevel;
    bool _defending;
    int _hp;
    int _attack;
};
