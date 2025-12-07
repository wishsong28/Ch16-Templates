//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch16 Templates - Programming Assignment #15b
//12.07.2025

//This program demonstrates the use of function templates by accepting a numerical values and returning the value halved.

#include <iostream>
using namespace std;

//Template definition for half function


int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}

