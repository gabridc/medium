
#include "Observer.h"
#include <iostream>

void Observer::observe(Observable * chat)
{
    std::optional<Event> m;
    m = chat->getPendingEvent();
    events.push(m.value());
    processEvent();
}