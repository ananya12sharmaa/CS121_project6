#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class Address 
{//defining class
	//limited inherited access
	protected:
    		std::string street;
    		std::string city;
    		std::string state;
    		std::string zip;

	public:
    		Address();
    		Address(std::string street, std::string city, std::string state, std::string zip);
   		void init(std::string street, std::string city, std::string state, std::string zip);
    		void printAddress();
};//ending class def

#endif
