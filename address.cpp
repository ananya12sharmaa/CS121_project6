#include "address.h"

Address::Address()
{//contructor
	street = " ";
	city = " ";
	state = " ";
	zip = " ";
}//constructor ends now

//Address::Address(std::string street, std::string city, std::string state, std::string zip) {
  //  init(street, city, state, zip);
//}//didnt work now

void Address::init(std::string thestreet, std::string thecity, std::string thestate, std::string thezip) 
{
       	street = thestreet;
	city = thecity;
	state = thestate;
	zip = thezip;
}//ends

void Address::printAddress() 
{
	std::cout << street << std::endl;
	std::cout << city << " " << state << ", " << zip << std::endl;
}//ends here

