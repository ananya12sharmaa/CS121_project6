#include <iostream>
#include <sstream>
#include "date.h"

Date::Date() 
{
	month = 1;
	day = 1;
	year = 1970;
}

Date::Date(std::string dateString) 
{
	init(dateString);  // Initialize the date using the string
}

void Date::init(std::string dateString)
{
	std::stringstream ss(dateString);

	std::string sMonth, sDay, sYear;
	getline(ss, sMonth, '/');
	getline(ss, sDay, '/');
	getline(ss, sYear, '/');

	ss.clear();

    // Convert the extracted strings to integers
	std::stringstream ssMonth(sMonth), ssDay(sDay), ssYear(sYear);
    
	ssMonth >> month;
	ssDay >> day;
	ssYear >> year;
}

void Date::printDate()
{
	std::cout << "Date: " << month << "/" << day << "/" << year << std::endl;
}
