#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>

class PizzaComponent {
    private:
        double price;
        std::string name;
    public:
        PizzaComponent(const std::string& name, double price);
        std::string getName() const;
        double getPrice() const;
};

#endif