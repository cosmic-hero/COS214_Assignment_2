#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>

class PizzaComponent {
    protected:
        double price;
        std::string name;
    public:
        PizzaComponent(const std::string& name, double price);
        virtual ~PizzaComponent() = default;
        virtual std::string getName() const = 0 ;
        virtual double getPrice() const = 0;
};

#endif