#include "ToppingGroup.h"

ToppingGroup::ToppingGroup(const std::string& name, double price) : PizzaComponent(name, price){}

ToppingGroup::~ToppingGroup(){
    for(auto topping : toppings) {
        delete topping;
    }
    toppings.clear();
}

void ToppingGroup::add(PizzaComponent* component) {
    toppings.push_back(component);
}

void ToppingGroup::remove(PizzaComponent* component) {
    for (auto it = toppings.begin(); it != toppings.end(); ++it){
        if (*it == component) {
            delete *it;
            toppings.erase(it);
            return;
        }
    }
}

std::string ToppingGroup::getName() const{
    std::string out = name + " (";

    for (size_t i = 0; i < toppings.size(); ++i) {
        out += toppings[i]->getName();
        if (i < toppings.size() - 1) {
            out += ", ";
        }
    }
    out += ")";

    return out;
}

double ToppingGroup::getPrice() const{
    double total = price;

    for(auto topping : toppings) {
        total += topping->getPrice();
    }

    return total;
}