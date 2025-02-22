#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "address.h"
#include "date.h"

class Student 
{//class definition begins
	protected:
		std::string firstName;
		std::string lastName;
		Date* dob;            // full form-Date of birth
		Date* expectedGrad;   // full form-Expected graduation date
		Address* address;
		int creditHours;

	public:
		Student();   // Constructor
		~Student();  // Destructor

		void init(std::string string); 
		void printStudent();           
		std::string getLastFirst();    
		std::string getFirstName();  
		std::string getLastName();    
		int getCreditHours();        
};//class def ends

#endif
