#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H

#include "DiscountStrategy.h"

class BulkDiscount : public DiscountStrategy {
    public:
        double applyDiscount() const override;
};

#endif