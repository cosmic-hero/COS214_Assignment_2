#include "ToppingGroup.h"

ToppingGroup::ToppingGroup(const std::string& name, double price, PizzaComponent* toppings) : PizzaComponent(name, price){
    this->toppings = toppings;
}

void ToppingGroup::add(PizzaComponent* component) {
    //Need to implement logic to add a component to the toppings.
}