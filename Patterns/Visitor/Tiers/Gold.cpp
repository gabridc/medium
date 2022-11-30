#include "Gold.h"
#include "RewardVisitor.h"
#include "CashbackVisitor.h"

double Gold::calculateReward(RewardVisitor* v)
{
   std::cout << "Gold Earn rewards calculate" << std::endl;
   return v->visit(this);
}
double Gold::calculateCashback(CashbackVisitor* v)
{
   std::cout << "Gold Cashback calculate" << std::endl;
   return v->visit(this);
}