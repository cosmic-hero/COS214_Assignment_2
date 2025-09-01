#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Observer.h"
#include <iostream>

class Customer : public Observer {
    private:
        std::string name;
    public:
        Customer(const std::string& name);
        void update(const std::string& message) override;
};

#endif