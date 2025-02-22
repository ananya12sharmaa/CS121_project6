#include "address.h"

Address::Address()
{
	street = " ";
	city = " ";
	state = " ";
	zip = " ";
}

//Address::Address(std::string street, std::string city, std::string state, std::string zip) {
  //  init(street, city, state, zip);
//}

void Address::init(std::string thestreet, std::string thecity, std::string thestate, std::string thezip) 
{
       	street = thestreet;
	city = thecity;
	state = thestate;
	zip = thezip;
}

void Address::printAddress() 
{
	std::cout << street << std::endl;
	std::cout << city << " " << state << ", " << zip << std::endl;
}

