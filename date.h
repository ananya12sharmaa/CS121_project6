#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <iostream>
#include <string>
#include <sstream>

class Date 
{//defining class
	//limited inherited access only
	protected:
		std::string date;
		int month;
		int day;
		int year;
	public:
		Date();
		Date(std::string dateString);
		void init(std::string dateString);
		void printDate();
};//ending class def

#endif
