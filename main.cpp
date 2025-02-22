#include <iostream>
#include <fstream>
#include <string>
#include "date.h"
#include "address.h"
#include "student.h"

const int MAX_STUDENTS = 50; // Maximum number of students to read

int main()
{
  // Opening file file, with chatgpt style error check
  std::ifstream inFile("students.csv");
  if (!inFile)//to check if it is false then 
  {
  std::cerr <<"Error opening file!" << std::endl;
  return 1;
  }

  Student* students = new Student[MAX_STUDENTS];

  int counter = 0;
  std::string item;

  while (getline(inFile, item) && counter < MAX_STUDENTS) 
  {
    students[counter].init(item); 
    counter++;
  }

  // file close as a habit
  inFile.close();

  //printing the main information here
  for (int i = 0; i < counter; ++i) 
  {
    students[i].printStudent();  // Print student data
    std::cout << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  }

  delete students;

  return 0;
} // ending main
