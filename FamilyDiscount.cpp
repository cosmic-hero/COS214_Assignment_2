#include "FamilyDiscount.h"

double FamilyDiscount::applyDiscount(double total, int count) const {
    return total * 0.85;
}

std::string FamilyDiscount::getDiscountName() const {
    return "Family Discount";
}