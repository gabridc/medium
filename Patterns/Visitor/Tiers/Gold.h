#ifndef GOLD_H
#define GOLD_H
#include <memory>
#include <vector>
#include "Tier.h"

class Gold : public Tier
{

public:
    Gold(double earnExtra, double cashback, bool spotifyRefund = false, bool netflixRefund = false): 
            Tier(earnExtra,cashback,spotifyRefund,netflixRefund){};

    virtual double calculateReward(RewardVisitor* v) override;
    virtual double calculateCashback(CashbackVisitor* v) override;
};

#endif