#include "Order.h"
#include "RegularPrice.h"

Order::Order() {
    discountStrategy = new RegularPrice();
}

Order::~Order() {
    delete discountStrategy;
    for (auto pizza : pizzas) {
        delete pizza;
    }
}

void Order::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
}

double Order::calculateTotal() const {
    double total = 0.0;
    for (auto pizza : pizzas) {
        total += pizza->getPrice();
    }
    total -= discountStrategy->applyDiscount(total, pizzas.size());
    return total;
}

void Order::printOrder() const {
    std::cout << "\n=== ORDER SUMMARY ===" << std::endl;
    for (size_t i = 0; i < pizzas.size(); ++i) {
        std::cout << (i + 1) << ". ";
        pizzas[i]->printPizza();
    }
    std::cout << "Discount: " << discountStrategy->getDiscountName() << std::endl;
    std::cout << "Total: R" << calculateTotal() << std::endl;
}

int Order::getPizzaCount() {
    return pizzas.size();
}

void Order::setDiscountStrategy(DiscountStrategy* strategy) {
    delete discountStrategy;
    discountStrategy = strategy;
}