#include "Topping.h"

Topping::Topping(const std::string& name, double price): PizzaComponent(name, price){}

std::string Topping::getName() const{
    return name;
}

double Topping::getPrice() const{
    return price;
}