#ifndef TOPPING_H
#define TOPPING_H

#include "PizzaComponent.h"
#include <string>

class Topping : public PizzaComponent{
    public:
        Topping(const std::string& name, double price);
        std::string getName() const override;
        double getPrice() const override;
};

#endif