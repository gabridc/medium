#ifndef EVENT_H
#define EVENT_H
#include <string>

enum class Priority
{
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL
};

enum class Type
{
    INFO,
    WARNING,
    ERROR
};



class Event
{

public:
    Event(void) = delete;
    Event(std::string from, std::string description, Priority priority = Priority::LOW, Type type = Type::INFO);

    void print(void);

    std::string from_;
    std::string description_;
    Priority priority_;
    Type type_;

private:
    std::string PrioritytoStr(Priority& p) const noexcept;
    std::string TypetoStr(Type& t) const noexcept;

};

#endif