#include "ErrorEventor.h"

void ErrorEventor::newEvent(const Event m)
{
    events.push_back(m);
    notify();
}