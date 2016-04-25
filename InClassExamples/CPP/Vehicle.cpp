
#include <sstream>
#include <iostream> 

#include "Vehicle.hpp"


// Constructor
Vehicle::Vehicle(void)
{
    this->year = 0;
    this->make = "";
    this->model = "";
}

Vehicle::Vehicle(int yr, std::string mk, std::string mdl)
{
    this->year = yr;
    this->make = mk;
    this->model = mdl;
}

// Destructor
Vehicle::~Vehicle(void)
{

}


std::string Vehicle::toString(void)
{
    std::ostringstream stream;
    stream << this->year << " " << this->make << " " << this->model;
    return stream.str();
}

void Vehicle::print(void)
{
    std::cout << toString() << std::endl;
}


void Vehicle::drive(void)
{
    std::cout << "drive: generic vehicle" << std::endl;

}

