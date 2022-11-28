#include "GeneralEventor.h"

void GeneralEventor::newEvent(const Event m)
{
    events.push_back(m);
    notify();
}