#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H

#include "DiscountStrategy.h"

class BulkDiscount : public DiscountStrategy {
    public:
        double applyDiscount(double total, int count) const override;
        std::string getDiscountName() const override;
};

#endif