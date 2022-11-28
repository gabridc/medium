#include "DashboardObserver.h"
#include <iostream>

void DashboardObserver::processEvent(void)
{
    while(events.empty() == false)
    {
        auto e = events.top();

        if(e.type_ == Type::WARNING)
            std::cout << std::endl << "Switch on warning dashboard icon" << std::endl;
        if(e.type_ == Type::ERROR)
            std::cout << std::endl << "Switch on error dashboard icon" << std::endl;

        std::cout << "DahsboardObserver -> ";
        e.print();    //threading process Event
        events.pop();
    }
}