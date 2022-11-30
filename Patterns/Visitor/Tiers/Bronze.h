#ifndef BRONZE_H
#define BRONZE_H
#include <memory>
#include <vector>
#include "Tier.h"

class Bronze : public Tier
{

public:
    Bronze(double earnExtra, double cashback, bool spotifyRefund = false, bool netflixRefund = false): 
            Tier(earnExtra,cashback,spotifyRefund,netflixRefund){};

    virtual double calculateReward(RewardVisitor* v) override;
    virtual double calculateCashback(CashbackVisitor* v) override;
};

#endif