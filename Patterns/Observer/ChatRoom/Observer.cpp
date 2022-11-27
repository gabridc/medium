
#include "Observer.h"


Observer::Observer(std::string username) : username_(username){};

void Observer::observe(Observable * chat)
{
    std::optional<Message> m;
    if(messages.size() == 0)
        m = chat->getPendingMsg();
    else
        m = chat->getPendingMsg(messages.at(messages.size() - 1 ));
    messages.push_back(m.value());
}

void Observer::print(void)
{
    std::string tab = "";
    std::cout << "Print chat username: " << username_ << std::endl;
    for (auto m : messages) 
    {
        tab = "";
        if(m.from == username_)
            tab = "     ";
        
        std::cout << std::endl << tab << "From: " << m.from << std::endl << tab << "To: " << m.to  << std::endl  << tab  << "Description: " << m.description << std::endl;
        
    }
}