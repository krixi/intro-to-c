
#include <string>

class Person
{
protected:
    std::string name;
    std::string gender;
    int age;

public:
    // Constructors
    Person(void);
    Person(std::string name, std::string gender, int age);
    
    // Destructor
    ~Person(void);


    // setters for class members
    void setName( std::string name );
    void setGender( std::string gender );
    void setAge( int age );

    // getters for class members
    std::string getName(void);
    std::string getGender(void);
    int getAge(void);

    // Helper function to print out the person's information
    void print(void);
};

