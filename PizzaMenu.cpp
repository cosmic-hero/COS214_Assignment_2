#include "PizzaMenu.h"

void PizzaMenu::notifyObservers(const std::string& message) const {
    std::cout << "PIZZA MENU UPDATE: " << message << std::endl;
    for (auto observer : observers) {
        observer->update(message);
    }
}