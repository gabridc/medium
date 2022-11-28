#include "BrakeObserver.h"
#include <iostream>

void BrakeObserver::processEvent(void)
{
    while(events.empty() == false)
    {
        auto e = events.top();

        if(e.priority_ == Priority::CRITICAL || e.priority_ == Priority::HIGH)
            std::cout << std::endl << "Braking ... Stopping the car" << std::endl;

        std::cout  << "BrakerObserver -> ";
        e.print();
        events.pop();
    }
}