#include <iostream>
#include "GeneralEventor.h"
#include "GeneralObserver.h"
#include "BrakeObserver.h"
#include "DashboardObserver.h"
#include "ErrorEventor.h"
#include "Observer.h"
#include "Event.h"

//GLOBAL OBJECTS
auto general = new GeneralEventor();
auto error = new ErrorEventor();

auto eventDataRecorder = new GeneralObserver();
auto dashboard = new DashboardObserver();
auto brake = new BrakeObserver();

void dispatch(Event e)
{
    if(e.from_ == "SpeedControl" or e.from_ == "ClimateControl" or 
        e.from_ == "Wheel" or e.from_ == "Door" or e.from_ == "Key")
        general->newEvent(e);
    
    if(e.from_ == "DistanceSensor")
        error->newEvent(e);
}


int main(int argc, char *argv[])
{
    std::cout << "Hello Eventor" << std::endl;
    std::cout << "Observer Pattern" << std::endl;

    general->addObserver(eventDataRecorder);
    general->addObserver(dashboard);

    error->addObserver(eventDataRecorder);
    error->addObserver(dashboard);
    error->addObserver(brake);
    
    dispatch(Event("SpeedControl", "Speed: 120.0"));
    dispatch(Event("ClimateControl", "Temperature: 23.0"));
    dispatch(Event("Wheel", "Pressure: 10", Priority::LOW, Type::WARNING));
    dispatch(Event("Door", "Door open", Priority::LOW, Type::WARNING));
    dispatch(Event("Key", "Key low battery", Priority::LOW, Type::WARNING));
    dispatch(Event("DistanceSensor", "Distance: 1 meter", Priority::CRITICAL, Type::WARNING));
    
}