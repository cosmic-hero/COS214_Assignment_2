#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"

class BasePizza : public Pizza {
    private:
        PizzaComponent toppings;
    public:
        BasePizza(PizzaComponent toppings);
        double getPrice() const override;
        std::string getName() const override;
};

#endif