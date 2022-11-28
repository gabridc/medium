#ifndef OBSERVER_H
#define OBSERVER_H

#include <stack>
#include "Observable.h"
#include "Event.h"
#include <optional>

class Observable;

class Observer
{
public:
    void observe(Observable * chat);
    virtual void processEvent(void) = 0;
protected:
    std::stack<Event> events;
};

#endif