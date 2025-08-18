#include "PizzaMenu.h"

PizzaMenu::PizzaMenu(Observer* observer, Pizza* pizza) : Menus(observer, pizza) {
}

void PizzaMenu::notifyObservers(const std::string& message) const {
    
}