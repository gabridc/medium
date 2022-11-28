
#include "Observable.h"

void Observable::notify(void)
{
    for (auto o : observers)
        o->observe(this);
}

void Observable::addObserver(Observer* o)
{
    observers.push_back(o);
}

std::optional<Event> Observable::getPendingEvent(void)
{
    if(events.empty())
        return std::nullopt;

    return events.at(events.size() - 1);
}
