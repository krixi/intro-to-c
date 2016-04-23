

#include <iostream>
#include "Person.hpp"

// Constructors
Person::Person(void)
{
    name = "not specified";
    gender = "not specified";
    age = -1;
}

Person::Person(std::string name, std::string gender, int age)
{
    setName( name );
    setGender( gender );
    setAge( age );
}

// Destructor
Person::~Person(void) { }


// setters for class members
void Person::setName( std::string name )
{
    this->name = name;
}

void Person::setGender( std::string gender )
{
    this->gender = gender;
}

void Person::setAge( int age )
{
    this->age = age;
}

// getters for class members
std::string Person::getName(void)
{
    return this->name;
}
std::string Person::getGender(void)
{
    return this->gender;
}
int Person::getAge(void)
{
    return this->age;
}

// Helper function to print out the person's information
void Person::print(void)
{
    std::cout << getName() << ": " << getGender() << ", " << getAge() << std::endl;
}

