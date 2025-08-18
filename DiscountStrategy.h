#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

class DiscountStrategy {
    public:
        virtual ~DiscountStrategy() = default;
        virtual double applyDiscount() const = 0;
};

#endif