#ifndef PAY_H
#define PAY_H
#include <memory>
#include <vector>
#include "User.h"
#include "Tier.h"
#include "CashbackVisitor.h"

class Pay
{

public:
    CashbackVisitor cashbackV;
    double amount_ = 0.0;
    User* u_;
    Pay(double amount, User* u): amount_(amount), u_(u){};
    void process(void);
};

#endif