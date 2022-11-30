#include "CashbackVisitor.h"
#include "Tiers.h"
#include <iostream>

double CashbackVisitor::visit(Gold* tier)
{
    return tier->cashback_ * 3;
}

double CashbackVisitor::visit(Silver* tier)
{
    return tier->cashback_ * 2;
}

double CashbackVisitor::visit(Bronze* tier)
{
    return tier->cashback_ * 1;
}