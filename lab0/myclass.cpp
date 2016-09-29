/////////////////////////////////////////////
//myclass.cpp
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//Program for introduction/refresher on c++/c
//////////////////////////////////////////////

#include <iostream>
#include "myclass.h"

std::string MyClass::output = "Hello New World";

void MyClass::print()
{
	std::cout << MyClass::output << std::endl;
};
