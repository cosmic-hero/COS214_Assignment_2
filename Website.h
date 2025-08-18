#ifndef WEBSITE_H
#define WEBSITE_H

#include "Observer.h"

class Website : public Observer {
    public:
        void update(const std::string& message) override;
};

#endif