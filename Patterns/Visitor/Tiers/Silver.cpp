#include "Silver.h"
#include "RewardVisitor.h"
#include "CashbackVisitor.h"

double Silver::calculateReward(RewardVisitor* v)
{
   std::cout << "Silver Earn rewards calculate" << std::endl;
   return v->visit(this);
}
double Silver::calculateCashback(CashbackVisitor* v)
{
   std::cout << "Silver Cashback calculate" << std::endl;
   return v->visit(this);
}