#ifndef CASHBACK_H
#define CASHBACK_H
#include <memory>
#include <vector>
#include "Tiers.h"

class CashbackVisitor
{
public:
    double visit(Gold* tier);
    double visit(Silver* tier);
    double visit(Bronze* tier);
};

#endif