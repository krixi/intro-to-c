#pragma once

#include "Vehicle.hpp"

class Truck : public Vehicle
{
public:
    Truck(void);
    Truck(int yr, std::string mk, std::string mdl); 
    virtual void drive(void);
};




