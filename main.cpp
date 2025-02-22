#include <iostream>
#include <fstream>
#include <string>
#include "date.h"
#include "address.h"
#include "student.h"

const int MAX_STUDENTS = 50; // Maximum number of students to read

int main(){
  
  // Open file
  std::ifstream inFile("students.csv");
  if (!inFile) {
    std::cerr << "Error opening file!" << std::endl;
    return 1;
  }

  // Create array of 50 students
  Student* students = new Student[MAX_STUDENTS];

  int counter = 0;
  std::string item;

  // Read file line by line and process each student's data
  while (getline(inFile, item) && counter < MAX_STUDENTS) {
    students[counter].init(item); // Initialize student with data from CSV line
    counter++;
  }

  // Close the file after reading
  inFile.close();

  // Output student information
  for (int i = 0; i < counter; ++i) {
    students[i].printStudent();  // Print student data
    std::cout << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  }

  // Clean up dynamically allocated memory
  delete[] students;

  return 0;
} // end main
