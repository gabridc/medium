#include "Pay.h"

void Pay::process(void)
{
    // Processing is correct, continue, calculate cashback
    auto aumount = amount_ * u_->tier_->calculateCashback(new CashbackVisitor());
    u_->saveCashback(aumount);
}