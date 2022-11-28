#ifndef ERR_H
#define ERR_H
#include "Observable.h"

class ErrorEventor : public Observable
{
    public:
    virtual void newEvent(const Event m) override;
};

#endif