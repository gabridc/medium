#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <vector>
#include "Observer.h"
#include "Message.h"
#include <optional>

class Observer;

class Observable
{

public:
    virtual void addObserver(Observer* o) = 0;
    virtual void newMessage(const Message m) = 0;
    virtual void notify(void);
    virtual std::optional<Message> getPendingMsg(Message m) = 0;
    virtual std::optional<Message> getPendingMsg(void) = 0;
public:
    std::vector<Observer*> observers;
    std::vector<Message> messages;

};

#endif