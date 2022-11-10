#pragma once
#include <xstring>

#include "PropertyExtension.h"

class Character
{
public:
    Character(std::string name, int level);
    std::string Hello();
    std::string Status();
    void Damage(int attack);
    void Defend();
    void ReleaseDefense();
    void Heal();
    
    READONLY_PROPERTY(int, Hp);
    READONLY_PROPERTY(int, MaxHp);
    READONLY_PROPERTY(std::string, Name);
    READONLY_PROPERTY(int, Attack);
    GET(Hp) 
    { 
        return _hp; 
    }
    GET(MaxHp) 
    { 
        return _maxHp; 
    }
    GET(Attack) 
    { 
        return _attack;
    }
    GET(Name) 
    { 
        return _name;
    }
private:
    std::string _name;
    int _currentLevel;
    bool _defending;
    int _hp;
    int _attack;
    int _maxHp;
};
