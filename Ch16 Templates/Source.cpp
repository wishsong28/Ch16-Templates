//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch16 Templates - Programming Assignment #15b
//12.07.2025

//This program demonstrates the use of function templates by accepting a numerical values and returning the value halved.

#include <iostream>
#include <cmath>
using namespace std;

//Template definition for half function
template <typename T>
T half(T value)
{
	return value / 2;
}

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

int half<int>(int value)
{
	return static_cast<int>(round(value / 2.0));
}