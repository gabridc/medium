#include "GeneralObserver.h"
#include <iostream>

void GeneralObserver::processEvent(void)
{
    while(events.empty() == false)
    {
        auto e = events.top();
        std::cout << std::endl <<"GeneralObserver -> ";
        e.print();    //threading process Event
        events.pop();
    }
}