#include <iostream>
#include <sstream>
#include "student.h"
#include "date.h"
#include "address.h"

Student::Student() 
{
    firstName = "none";
    lastName = "none";
    dob = new Date();
    expectedGrad = new Date();
    address = new Address();
    creditHours = -1;
}//constructor ends

Student::~Student() 
{
    delete dob;
    delete expectedGrad;
    delete address;
}//preventing errors

void Student::init(std::string string) 
{
    std::stringstream ss;
    ss.clear();//preventing errors
    ss.str(string);  // Use the parameter directly

    // here we are getting first and last name for student
    getline(ss, firstName, ',');
    getline(ss, lastName, ',');

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
    std::string s_expectedGrad;

    getline(ss, sdob, ',');
    getline(ss, s_expectedGrad, ',');

    dob->init(sdob);      // Initializing dob
    expectedGrad->init(s_expectedGrad);  // Initializing grad date

    // Getting the   credit hours
    std::string sCreditHours;
    getline(ss, sCreditHours);

    ss.clear();
    ss.str("");

    ss << sCreditHours;
    ss >> creditHours;
}

void Student::printStudent() 
{
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    address->printAddress();   
    dob->printDate();          
    expectedGrad->printDate(); 
    std::cout << "Credit Hours: " << creditHours << std::endl;
}

std::string Student::getLastFirst() 
{
    std::stringstream ss;
    ss.clear();
    ss << lastName << ", " << firstName;
    return ss.str();
}

std::string Student::getFirstName() 
{
    return firstName;
}

std::string Student::getLastName() 
{
    return lastName;
}

int Student::getCreditHours() 
{
    return creditHours;
}//endssszz
