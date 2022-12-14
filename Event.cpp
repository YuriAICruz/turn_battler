#include "Event.h"

#include <iostream>

Event::Event() { }

Event::~Event() { }

void Event::addListener(IEventCallback* action)
{
    CallbackArray::iterator position = std::find(actions.begin(), actions.end(), action);

    if(position != actions.end())
    {
        std::cout << "Action existed in delegate list.";
        return;
    }

    actions.push_back(action);
}

void Event::removeListener(IEventCallback* action)
{
    CallbackArray::iterator position = find(actions.begin(), actions.end(), action);
 
    if (position == actions.end())
    {
        return;
    }
 
    actions.erase(position);
}

void Event::fire()
{
    for (IEventCallback* action : actions)
    {
        (*action)();
    }
}
