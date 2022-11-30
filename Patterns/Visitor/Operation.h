#ifndef OPERA_H
#define OPERA_H
#include <memory>
#include <vector>

class Operation
{

public:
    Operation(double amount, double retired, double fiatPrice) : amount_(amount), retired_(retired), fiatPrice_(fiatPrice) {};
    double amount_ = 0.0;
    double retired_ = 0.0;
    double fiatPrice_ = 0.0;

    inline double getAvailable(void) {return amount_ - retired_;}
};

#endif