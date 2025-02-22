#include <iostream>
#include <sstream>
#include "date.h"

Date::Date() 
{
	date= "01/01/1970";
	month = 1;
	day = 1;
	year = 1970;
}


void Date::init(std::string dateString) 
{
	std::stringstream ss;
	ss.clear();
	ss.str(stringDate);

	std::string sMonth, sDay, sYear;
	getline(ss, sMonth, '/');
	getline(ss, sDay, '/');
	getline(ss, sYear, '/');


	ss.clear();
	ss.str(sMonth);
	ss >> month;

	ss.clear();
	ss.str(sDay);
	ss >> day;

	ss.clear();
	ss.str(sYear);
	ss >> year;
}

void Date::printDate() 
{
	std::cout << "Date: " << month << "/" << day << "/" << year << std::endl;
}

