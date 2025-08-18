#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include "PizzaComponent.h"

class Pizza{
    public:
        Pizza() = default;
        virtual ~Pizza() = default;
        virtual double getPrice() const = 0;
        virtual std::string getName() const = 0;
        std::string printPizza();
};

#endif