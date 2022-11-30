#include "Earn.h"

void Earn::process(void)
{
    // Processing is correct, continue, calculate earns rewards
    auto aumount = amount_ * u_->tier_->calculateReward(new RewardVisitor());
    u_->saveEarn(aumount);
}