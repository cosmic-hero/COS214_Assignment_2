#include "StuffedCrust.h"

StuffedCrust::StuffedCrust(Pizza* pizza) : PizzaDecorator(pizza) {}

double StuffedCrust::getPrice() const {
   return (20.0 + pizza->getPrice());
}

std::string StuffedCrust::getName() const {
    return (pizza->getName() + " with Stuffed Crust");
}