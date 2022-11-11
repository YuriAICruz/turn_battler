#pragma once
#include <xstring>
#include "PropertyExtension.h"

class Character
{
public:
    Character(std::string name, int level);
    std::string hello() const;
    std::string status() const;
    void damage(int attack);
    void defend();
    void releaseDefense();
    void heal();
    
    READONLY_PROPERTY(int, Hp);
    READONLY_PROPERTY(int, MaxHp);
    READONLY_PROPERTY(std::string, Name);
    READONLY_PROPERTY(int, Attack);
    GET(Hp) 
    { 
        return hp_; 
    }
    GET(MaxHp) 
    { 
        return maxHp_; 
    }
    GET(Attack) 
    { 
        return attack_;
    }
    GET(Name) 
    { 
        return name_;
    }
private:
    std::string name_;
    int currentLevel_;
    bool defending_;
    int hp_;
    int attack_;
    int maxHp_;
};
