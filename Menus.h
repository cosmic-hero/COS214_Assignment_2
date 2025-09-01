#ifndef MENUS_H
#define MENUS_H

#include "Observer.h"
#include "Pizza.h"
#include <string>
#include <vector>

class Menus{
    protected:
        std::vector<Observer*> observers;
        std::vector<Pizza*> pizzas;
    public:
        virtual ~Menus() = default;
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        virtual void notifyObservers(const std::string& message) const = 0;
        void addPizza(Pizza* pizza);
        void removePizza(Pizza* pizza);
};

#endif