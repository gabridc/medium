#include "ChatRoom.h"
#include <iostream>

    void ChatRoom::addObserver(Observer* o)
    {
        observers.push_back(o);
    }
    void ChatRoom::newMessage(Message m)
    {
        messages.push_back(m);
        notify();
    }

    std::optional<Message> ChatRoom::getPendingMsg(Message m)
    {
       // std::cout << "Message Size: " << messages.size() << std::endl;
       // std::cout << "Last message: " ; m.print(); std::cout << std::endl;
      //  std::cout << "Next message: " << std::endl; messages.at(messages.size() - 1 ).print(); std::cout << std::endl;
        return messages.at(messages.size() - 1);
    }

    
    std::optional<Message> ChatRoom::getPendingMsg(void)
    {
         //   std::cout << "Message Size: " << messages.size() << std::endl;
        //    std::cout << "Last message2: " << std::endl; messages.at(messages.size() - 1 ).print(); std::cout << std::endl;
            return messages.at(messages.size() -1 );
    }


    