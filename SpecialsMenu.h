#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H

#include "Menus.h"

class SpecialsMenu : public Menus {
    public:
        void notifyObservers(const std::string& message) const override;
};

#endif  