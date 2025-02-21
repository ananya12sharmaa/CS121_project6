#include <date.h>
#include <student.h>

#include <iostream>
#include <sstream>

Student::Student()
{
	studentString= "";
	lastName= "";
	firstName= "";
	dob= new Date();
	expectedGrad = new Date();
	adress = new Address();
	getcreditHours = 0;

}//contructor end

void Student::printStudent()
{
	std::cout << firstName << " " << lastName << std::endl;
	address->printStudent();

	std::cout << "DOB: ";
	dob->printDate();
	std::cout << "Expected Graduation: ";
	expectedGrad->printDate();

