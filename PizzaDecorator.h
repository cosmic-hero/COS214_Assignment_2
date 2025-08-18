#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "Pizza.h"
#include <string>

class PizzaDecorator : public Pizza {
    private:
        Pizza pizza;
    public:
        PizzaDecorator(Pizza pizza);
        double getPrice() const override;
        std::string getName() const override;
};

#endif