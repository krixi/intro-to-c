
#include <iostream>

#include "Vehicle.hpp"


int main(void)
{
    Vehicle vehicle1( 1991, "Honda", "Civic" );
    Vehicle vehicle2( 2016, "Tesla", "Model S" );
    vehicle1.print();
    vehicle2.print();


    Vehicle vehicle3;
    vehicle3.setYear( 2005 );
    vehicle3.setMake( "Volkswagen" );
    vehicle3.setModel( "Jetta" );
    vehicle3.print();


    return 0;
}
