#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include "DiscountStrategy.h"

class RegularPrice : public DiscountStrategy {
    public:
        double applyDiscount(double total, int count) const override;
        std::string getDiscountName() const override;
};

#endif