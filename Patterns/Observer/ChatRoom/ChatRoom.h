#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include "Observable.h"

class ChatRoom: protected Observable
{

public:
    void addObserver(Observer* o) override;
    void newMessage(Message m) override;

    virtual std::optional<Message> getPendingMsg(Message m) override;
    virtual std::optional<Message> getPendingMsg(void) override;
    
};

#endif