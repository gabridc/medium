#include "Event.h"
#include <iostream>


Event::Event(std::string from, std::string description, Priority priority, Type type): 
from_(from), description_(description), priority_(priority), type_(type)
{
    std::cout << "Event created" << std::endl;
}

void Event::print(void)
{
    std::cout << "[" << from_ << " | " << PrioritytoStr(priority_) << " | " << TypetoStr(type_) << "] "<<description_ << std::endl;
}


std::string Event::PrioritytoStr(Priority& p) const noexcept
{
    switch(p)
    {
        case Priority::LOW:
            return "LOW";
        case Priority::MEDIUM:
            return "MEDIUM";
        case Priority::HIGH:
            return "HIGH";
        case Priority::CRITICAL:
            return "CRITICAL";
        default:
            return "LOW";
    }
}

std::string Event::TypetoStr(Type& t) const noexcept
{
    switch(t)
    {
        case Type::INFO:
            return "INFO";
        case Type::WARNING:
            return "WARNING";
        case Type::ERROR:
        default:
            return "ERROR";
    }
}