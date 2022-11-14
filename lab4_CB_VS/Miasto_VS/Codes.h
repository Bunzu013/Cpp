#ifndef CODES_H_INCLUDED
#define CODES_H_INCLUDED

#include <iostream>

using namespace std;

class Codes
{
public:
	Codes(string code)
	{
		this->postCode = code;
		this->citizensQuantity = 1;
	}
	Codes() {};
	string postCode;
	int citizensQuantity;
};

#endif // CODES_H_INCLUDED
