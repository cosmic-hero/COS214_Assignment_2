#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

#include <string>

class DiscountStrategy {
    public:
        virtual ~DiscountStrategy() = default;
        virtual double applyDiscount(double total, int count) const = 0;
        virtual std::string getDiscountName() const = 0;
};

#endif