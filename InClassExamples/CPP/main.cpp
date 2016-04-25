

#include "Vehicle.hpp"
#include "Truck.hpp"

int main(void)
{
    Truck truck1( 2009, "Toyota", "Tacoma");
    truck1.print();
    truck1.drive();

    Vehicle car( 2016, "Tesla", "Model S");
    car.print();
    car.drive();

    return 0;
}

