#ifndef USER_H
#define USER_H
#include <memory>
#include <vector>
#include "User.h"
#include "Tier.h"

class User
{

public:
    double rewardsEarned = 0.0;
    double cashbackEarned = 0.0;
    Tier* tier_;
    User(Tier* tier): tier_(tier){};


    void saveCashback(double amount)
    {
        cashbackEarned = amount;
    };

    void saveEarn(double amount)
    {
        rewardsEarned = amount;
    };

    void print(void)
    {
        std::cout << std::endl << "-----------" 
                << std::endl << "Earn Rewards: " << rewardsEarned << std::endl << "Cashback Rewards: " << cashbackEarned 
        << std::endl << "-----------"  << std::endl ;
    }
};

#endif