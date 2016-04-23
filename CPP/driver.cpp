
#include "Person.hpp"


int main(void)
{
    // Each instance of the class contains its own copy of the data
    Person p1("Alison", "Female", 28);
    Person p2("Shawn", "Male", 24);
    Person p3("Jessie", "Agender", 31);

    // Calling print on a particular instance of each class will print out the data associated with that instance. 
    p1.print();
    p2.print();
    p3.print();

    // Example of using the default constructor and setter methods
    Person p4;
    p4.setName("Tyler");
    p4.setGender("Male");
    p4.setAge( 23 );
    p4.print();

    // Example of changing data inside the class instance and printing out the updated data
    p4.setName("Tessa");
    p4.setGender("Female");
    p4.print();
}
