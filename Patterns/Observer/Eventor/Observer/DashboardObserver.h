#ifndef DASH_OBS_H
#define DASH_OBS_H
#include "Observer.h"


class DashboardObserver : public Observer
{
    virtual void processEvent(void) override;

};

#endif