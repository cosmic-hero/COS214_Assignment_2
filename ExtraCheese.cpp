#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(Pizza* pizza) : PizzaDecorator(pizza) {}

double ExtraCheese::getPrice() const {
    return (12.0 + pizza->getPrice());
}

std::string ExtraCheese::getName() const {
    return (pizza->getName() + " with Extra Cheese");
}