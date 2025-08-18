#ifndef MENUS_H
#define MENUS_H

#include "Observer.h"
#include "Pizza.h"
#include <string>

class Menus{
    private:
        Observer* observer;
        Pizza* pizza;
    public:
        Menus(Observer* observer, Pizza* pizza);
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        virtual void notifyObservers(const std::string& message) const = 0;
        void addPizza(Pizza* pizza);
        void removePizza(Pizza* pizza);
};

#endif