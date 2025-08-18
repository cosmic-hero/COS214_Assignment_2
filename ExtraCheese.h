#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "PizzaDecorator.h"
#include <string>

class ExtraCheese : public PizzaDecorator {
    public:
        ExtraCheese(Pizza pizza);
        double getPrice() const override;
        std::string getName() const override;
};

#endif