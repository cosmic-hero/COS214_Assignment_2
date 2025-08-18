#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Observer.h"

class Customer : public Observer {
    public:
        void update(const std::string& message) override;
};

#endif