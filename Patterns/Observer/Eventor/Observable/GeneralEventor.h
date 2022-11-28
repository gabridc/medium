#ifndef GENERAL_H
#define GENERAL_H
#include "Observable.h"

class GeneralEventor : public Observable
{
    public:
    virtual void newEvent(const Event m) override;
};

#endif