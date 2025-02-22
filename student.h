#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "address.h"
#include "date.h"

class Student {
private:
    std::string firstName;
    std::string lastName;
    Date* dob;            // Date of birth
    Date* expectedGrad;   // Expected graduation date
    Address* address;
    int creditHours;

public:
    Student();   // Constructor
    ~Student();  // Destructor

    void init(std::string string);  // Method to initialize student data from a string
    void printStudent();           // Method to print student data

    std::string getLastFirst();    // Get name in "Last, First" format
    std::string getFirstName();   // Get first name
    std::string getLastName();    // Get last name
    int getCreditHours();         // Get credit hours
};

#endif
