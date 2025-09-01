#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator(Pizza* pizza){
    this->pizza = pizza;
}

PizzaDecorator::~PizzaDecorator() {
    delete pizza;
}

double PizzaDecorator::getPrice() const {
    return pizza->getPrice();
}

std::string PizzaDecorator::getName() const {
    return pizza->getName();
}