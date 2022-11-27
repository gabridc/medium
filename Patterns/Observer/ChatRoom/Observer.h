#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>
#include "Observable.h"
#include "Message.h"
#include <optional>

class Observable;

class Observer
{

public:
    Observer(void) = delete;
    Observer(std::string username);
    void observe(Observable * chat);
    void print(void);
private:
    std::vector<Message> messages;
    std::string username_;

};

#endif