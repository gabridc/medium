#include <iostream>
#include "User.h"
#include "Operation.h"
//#include "CashbackVisitor.h"
//#include "RewardVisitor.h"
#include "Tiers.h"
#include "Pay.h"
#include "Earn.h"

int main(int argc, char *argv[])
{
    std::cout << "Hello Visitor" << std::endl;
    std::cout << "Visitor Pattern" << std::endl;

    auto u1 = new User(new Gold(0.04, 0.08, true, true));
    auto u2 = new User(new Bronze(0.0, 0.02, true, true));

    // Print user information
    u1->print();
    u2->print();

    Pay(20.25, u1).process();
    Pay(20.25, u2).process();

    Earn(5, u1).process();
    Earn(5, u2).process();

    // Print user information
    u1->print();
    u2->print();

}