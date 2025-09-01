#ifndef ORDER_H
#define ORDER_H

#include "DiscountStrategy.h"
#include "Pizza.h"
#include <vector>

class Order{
    private:
        DiscountStrategy* discountStrategy;
        std::vector<Pizza*> pizzas;
    public:
        Order();
        ~Order();
        void addPizza(Pizza* pizza);
        void setDiscountStrategy(DiscountStrategy* discountStrategy);
        double calculateTotal() const;
        void printOrder() const;
        int getPizzaCount();
        void printOrder();
};

#endif