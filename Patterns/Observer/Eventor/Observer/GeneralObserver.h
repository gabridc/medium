#ifndef GENERAL_OBS_H
#define GENERAL_OBS_H

#include "Observer.h"

class GeneralObserver : public Observer
{
    virtual void processEvent(void) override;
};

#endif