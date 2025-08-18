#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include "Menus.h"

class PizzaMenu : public Menus {
    public:
        PizzaMenu(Observer* observer, Pizza* pizza);
        void notifyObservers(const std::string& message) const override;
};

#endif  