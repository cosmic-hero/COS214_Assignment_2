#ifndef STUFFEDCRUST_H
#define STUFFEDCRUST_H

#include "PizzaDecorator.h"
#include <string>

class StuffedCrust : public PizzaDecorator {
    public:
        StuffedCrust(Pizza* pizza);
        double getPrice() const override;
        std::string getName() const override;
};

#endif