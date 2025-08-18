#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"

class ToppingGroup : public PizzaComponent{
    private:
        PizzaComponent* toppings;
    public:
        ToppingGroup(const std::string& name, double price, PizzaComponent* toppings);
        void add(PizzaComponent* component);
};

#endif