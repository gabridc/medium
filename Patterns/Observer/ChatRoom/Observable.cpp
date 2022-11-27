
#include "Observable.h"

void Observable::notify(void)
{
    for (auto o : observers)
        o->observe(this);
}
