#include "SpecialsMenu.h"

void SpecialsMenu::notifyObservers(const std::string& message) const {
   std::cout << "SPECIALS MENU UPDATE: " << message << std::endl;
   for (auto observer : observers) {
       observer->update(message);
   }
}