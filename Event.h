#pragma once
#include <vector>

#include "EventCallback.h"

class Event
{
public:
    Event();
    ~Event();

    void addListener(IEventCallback* action);
    void removeListener(IEventCallback* action);
    void fire();

private:
    typedef std::vector<IEventCallback*> CallbackArray;
    CallbackArray actions;        
};
