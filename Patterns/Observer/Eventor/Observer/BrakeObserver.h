#ifndef BRAKE_OBS_H
#define BRAKE_OBS_H
#include "Observer.h"


class BrakeObserver : public Observer
{
    public:
    virtual void processEvent(void) override;

};

#endif