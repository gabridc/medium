#ifndef TIER_H
#define TIER_H
#include <memory>
#include <vector>
#include <iostream>

class CashbackVisitor;
class RewardVisitor;
class Tier
{

public:
    double earnExtra_ = 0.00; // 0 %
    double cashback_ = 0.00; // 0 %
    double spotifyRefund_ = false;
    double netflixRefund_ = false;
    
   
    Tier(double earnExtra, double cashback, bool spotifyRefund = false, bool netflixRefund = false): 
        earnExtra_(earnExtra), cashback_(cashback), 
        spotifyRefund_(spotifyRefund), netflixRefund_(netflixRefund){};

    // Acciones que hace la cosa
    virtual double calculateReward(RewardVisitor* v) = 0;
    virtual double calculateCashback(CashbackVisitor* v) = 0;
};
#endif