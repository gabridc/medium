#include "Bronze.h"
#include "RewardVisitor.h"
#include "CashbackVisitor.h"

double Bronze::calculateReward(RewardVisitor* v)
{
   std::cout << "Bronze Earn rewards calculate" << std::endl;
   return v->visit(this);
}
double Bronze::calculateCashback(CashbackVisitor* v)
{
   std::cout << "Bronze Cashback calculate" << std::endl;
   return v->visit(this);
}