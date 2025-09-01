#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include "Menus.h"

class PizzaMenu : public Menus {
    public:
        void notifyObservers(const std::string& message) const override;
};

#endif  