#include "PizzaComponent.h"

PizzaComponent::PizzaComponent(const std::string& name, double price){
    this->name = name;
    this->price = price;
}

std::string PizzaComponent::getName() const {
    return name;
}

double PizzaComponent::getPrice() const {
    return price;
}