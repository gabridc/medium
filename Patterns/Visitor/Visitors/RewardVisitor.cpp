#include "RewardVisitor.h"
#include <iostream>

double RewardVisitor::visit(Gold* tier)
{
    return tier->earnExtra_ * 1.75;
}

double RewardVisitor::visit(Silver* tier)
{
    return tier->earnExtra_ * 1.5;
}

double RewardVisitor::visit(Bronze* tier)
{
    return tier->earnExtra_ * 1.0;
}