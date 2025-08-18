#include "SpecialsMenu.h"

SpecialsMenu::SpecialsMenu(Observer* observer, Pizza* pizza) : Menus(observer, pizza) {
}

void SpecialsMenu::notifyObservers(const std::string& message) const {
   
}