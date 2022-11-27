#include <iostream>
#include "ChatRoom.h"
#include "Observer.h"
#include "Message.h"


int main(int argc, char *argv[])
{
    std::cout << "Hello Chat Room" << std::endl;
    std::cout << "Observer Pattern" << std::endl;

    auto chatRoom1 = new ChatRoom();
    auto chatRoom2 = new ChatRoom();
    auto user1 = new Observer("Alice");
    auto user2 = new Observer("Bob");
    auto user3 = new Observer("Charlie");

    chatRoom1->addObserver(user1);
    chatRoom1->addObserver(user2);

    chatRoom2->addObserver(user2);
    chatRoom2->addObserver(user3);

    chatRoom1->newMessage(Message("Alice", "Bob", "Hello Elena!"));
    chatRoom1->newMessage(Message("Bob", "Alice", "Hello Gabriel!"));

    chatRoom1->newMessage(Message("Bob", "Alice", "How r u?"));
    chatRoom1->newMessage(Message("Alice", "Bob", "Nice xD"));

    // Print all the messages sent or received
    user1->print();
}