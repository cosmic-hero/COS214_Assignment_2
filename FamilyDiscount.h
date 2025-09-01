#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H

#include "DiscountStrategy.h"

class FamilyDiscount : public DiscountStrategy {
    public:
        double applyDiscount(double total, int count) const override;
        std::string getDiscountName() const override;
};

#endif