#ifndef MSG_H
#define MSG_H

#include <string>
#include <iostream>


class Message
{

public:
    Message(void){};
    Message(std::string from, std::string to, std::string description): from(from), to(to), description(description){};
    std::string description;
    std::string from;
    std::string to;

    public:
        void print(void) const {std::cout << std::endl << "From: " << from << "\nTo: " << to << "\nContent: " << description << std::endl;};
};

#endif