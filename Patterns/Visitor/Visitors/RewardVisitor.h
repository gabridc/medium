#ifndef VISITOR_H
#define VISITOR_H
#include <memory>
#include <vector>
#include "Tiers.h"

class RewardVisitor
{
public:
    double visit(Gold* tier);
    double visit(Silver* tier);
    double visit(Bronze* tier);
};

#endif