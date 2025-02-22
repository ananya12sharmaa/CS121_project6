#include <iostream>
#include <sstream>
#include "student.h"
#include "address.h"
#include "date.h"

// Default Constructor
Student::Student()
{
    studentString = "";
    lastName = "";
    firstName = "";
    dob = new Date();  // Initializes a default Date object for DOB
    expectedGrad = new Date();  // Initializes a default Date object for expected graduation
    address = new Address();  // Initializes a default Address object
    getcreditHours = 0;  // Initialize credit hours to 0
}

// Destructor
Student::~Student()
{
    delete dob;  // Clean up dynamically allocated Date object for DOB
    delete expectedGrad;  // Clean up dynamically allocated Date object for expected graduation
    delete address;  // Clean up dynamically allocated Address object
}

// Method to set the student data
void Student::setStudentData(std::string fName, std::string lName, std::string dateOfBirth, std::string gradDate, Address *addr, int creditHours)
{
    firstName = fName;
    lastName = lName;

    // Initialize the Address object with the passed address
    address->init(addr->getStreet(), addr->getCity(), addr->getState(), addr->getZip());

    // Initialize the Date objects for DOB and expected graduation with the provided date strings
    dob->init(dateOfBirth);
    expectedGrad->init(gradDate);

    getcreditHours = creditHours;
}

// Method to print student information
void Student::printStudent()
{
    std::cout << firstName << " " << lastName << std::endl;
    address->printAddress();  // Print the address using Address class's print method

    std::cout << "DOB: ";
    dob->printDate();  // Print the date of birth using Date class's print method

    std::cout << "Expected Graduation: ";
    expectedGrad->printDate();  // Print expected graduation date using Date class's print method

    std::cout << "Credit Hours: " << getcreditHours << std::endl;  // Print credit hours
}
