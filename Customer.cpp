#include "Customer.h"

Customer::Customer(const std::string& name){
    this->name = name;
}

void Customer::update(const std::string& message) {
    std::cout << "Customer " << name << " received update: " << message << std::endl;
}