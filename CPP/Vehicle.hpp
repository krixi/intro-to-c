#pragma once

/**
 * 
 * C++ example - header file
 * This file contains the definition of a C++ class that contains basic information about any type of vehicle. 
 *
 */

#include <string>



class Vehicle
{
protected:
    int year;
    std::string make;
    std::string model;
    double gross_weight;   

public:
    // Constructors
    Vehicle(void);
    Vehicle(int year, std::string make, std::string model);
    Vehicle(int year, std::string make, std::string model, double gross_weight);

    // Destructor
    virtual ~Vehicle(void);


    // Class methods:
    void setMake( std::string make );
    void setModel( std::string model );
    void setYear( int year );
    void setGrossWeight( double weight );


    std::string getMake(void);
    std::string getModel(void);
    int getYear(void);
    double getGrossWeight(void);


    std::string toString(void);
    void print(void);
};


