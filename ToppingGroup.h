#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"
#include <string>
#include <vector>

class ToppingGroup : public PizzaComponent{
    private:
        std::vector<PizzaComponent*> toppings;
    public:
        ToppingGroup(const std::string& name, double price);
        ~ToppingGroup();
        void add(PizzaComponent* component);
        void remove(PizzaComponent* component);
        std::string getName() const override;
        double getPrice() const override;
};

#endif