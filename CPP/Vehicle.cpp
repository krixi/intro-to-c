/**
 * Source implementation file for example C++ class
 *
 */
#include <sstream>
#include <iostream>

#include "Vehicle.hpp"

// Constructors
Vehicle::Vehicle(void)
{
    // 'this' object is being created
    this->year = 0;
    this->gross_weight = 0;
}
Vehicle::Vehicle(int yr, std::string mk, std::string mdl): year(yr), make(mk), model(mdl), gross_weight(0.0)
{
    // 'this' object is being created
}
Vehicle::Vehicle(int yr, std::string mk, std::string mdl, double wt): year(yr), make(mk), model(mdl), gross_weight(wt)
{
    // 'this' object is being created
}

// Destructor
Vehicle::~Vehicle(void)
{
    // 'this' object is being destroyed.
}


// Class methods:
void Vehicle::setMake( std::string make )
{
    this->make = make;
}
void Vehicle::setModel( std::string model )
{
    this->model = model;
}
void Vehicle::setYear( int year )
{
    this->year = year;
}
void Vehicle::setGrossWeight( double weight )
{
    this->gross_weight = weight;
}


std::string Vehicle::getMake(void)
{
    return this->make;
}
std::string Vehicle::getModel(void)
{
    return this->model;
}
int Vehicle::getYear(void)
{
    return this->year;
}
double Vehicle::getGrossWeight(void)
{
    return this->gross_weight;
}


std::string Vehicle::toString(void)
{
    std::ostringstream stream;
    stream << getYear() << " " << getMake() << " " << getModel() << " (" << getGrossWeight() << ")";
    return stream.str();
}

void Vehicle::print(void)
{
    std::cout << toString() << std::endl;
}
