#include "BasePizza.h"

BasePizza::BasePizza(PizzaComponent* toppings){
    this->toppings = toppings;
}

BasePizza::~BasePizza() {
    delete toppings;
}

double BasePizza::getPrice() const {
    return (10.0 + 5.0 + 15.0 + toppings->getPrice());
}

std::string BasePizza::getName() const {
    return toppings->getName();
}