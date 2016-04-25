#pragma once


#include <string>


class Vehicle
{
protected:
    int year;
    std::string make;
    std::string model;

public:
    // Constructor
    Vehicle(void);
    Vehicle(int yr, std::string mk, std::string mdl); 

    // Destructor
    virtual ~Vehicle(void);

    virtual std::string toString(void);
    virtual void print(void);

    virtual void drive(void);
};

