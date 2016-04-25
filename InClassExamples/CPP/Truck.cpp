
#include <iostream>


#include "Truck.hpp"


Truck::Truck(void) :
    Vehicle()
{

}
Truck::Truck(int yr, std::string mk, std::string mdl) :
    Vehicle(yr, mk, mdl)
{

}

void Truck::drive(void)
{
    std::cout << "Driving a truck" << std::endl;
}

