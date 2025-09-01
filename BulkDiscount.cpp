#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(double total, int count) const {
    if (count >= 5) {
        return total * 0.9;
    }
    return total;
}

std::string BulkDiscount::getDiscountName() const {
    return "Bulk Discount";
}