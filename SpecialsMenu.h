#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H

#include "Menus.h"

class SpecialsMenu : public Menus {
    public:
        SpecialsMenu(Observer* observer, Pizza* pizza);
        void notifyObservers(const std::string& message) const override;
};

#endif  