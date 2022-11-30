#ifndef EARN_H
#define EARN_H
#include <memory>
#include <vector>
#include "User.h"
#include "Tier.h"
#include "RewardVisitor.h"

class Earn
{

public:
    RewardVisitor rewardV;
    double amount_ = 0.0;
    User* u_;
    Earn(double amount, User* u): amount_(amount), u_(u){};
    void process(void);
};

#endif