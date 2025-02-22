#include <iostream>
#include <sstream>
#include "student.h"
#include "date.h"
#include "address.h"

Student::Student() {
    firstName = "none";
    lastName = "none";
    dob = new Date();
    expectedGrad = new Date();
    address = new Address();
    creditHours = -1;
}

Student::~Student() {
    delete dob;
    delete expectedGrad;
    delete address;
}

void Student::init(std::string string) {
    std::stringstream ss;
    ss.clear();
    ss.str(string);  // Use the parameter directly

    // Get first and last name for student
    getline(ss, firstName, ',');
    getline(ss, lastName, ',');

    // Get address strings
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

    getline(ss, street, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    getline(ss, zip, ',');

    address->init(street, city, state, zip);  // Assuming address->init() exists

    // Get dates
    std::string sdob;
    std::string sexpectedGrad;

    getline(ss, sdob, ',');
    getline(ss, sexpectedGrad, ',');

    dob->init(sdob);      // Initialize birthday (using dob, not birthday)
    expectedGrad->init(sexpectedGrad);  // Initialize graduation date (using expectedGrad, not graduation)

    // Get credit hours
    std::string sCreditHours;
    getline(ss, sCreditHours);

    ss.clear();
    ss.str("");

    // Convert credit hours to an integer
    ss << sCreditHours;
    ss >> creditHours;
}

void Student::printStudent() {
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    address->printAddress();   // Assuming address->printAddress() exists
    dob->printDate();          // Assuming dob->printDate() exists
    expectedGrad->printDate(); // Assuming expectedGrad->printDate() exists
    std::cout << "Credit Hours: " << creditHours << std::endl;
}

std::string Student::getLastFirst() {
    std::stringstream ss;
    ss.clear();
    ss << lastName << ", " << firstName;
    return ss.str();
}

std::string Student::getFirstName() {
    return firstName;
}

std::string Student::getLastName() {
    return lastName;
}

int Student::getCreditHours() {
    return creditHours;
}
