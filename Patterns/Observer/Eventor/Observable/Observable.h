#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <vector>
#include "Observer.h"
#include "Event.h"
#include <optional>

class Observer;

class Observable
{

public:
    virtual void addObserver(Observer* o);
    virtual void newEvent(const Event m) = 0;
    virtual void notify(void);
    virtual std::optional<Event> getPendingEvent(void);
public:
    std::vector<Observer*> observers;
    std::vector<Event> events;

};

#endif