/****************************************************************************
** Author: Jonathan Raleigh
** Date: 01/17/2017
** Description: Project 2.b - tempConvert.cpp
**************************************************************************/
#include <iostream>
using namespace std;

int main()
{
cout << "Please enter a Celsius temperature." << endl;
double celsius, fahrenheit;
cin >> celsius;
fahrenheit = ( celsius * 1.8 ) + 32;
cout << "The equivalent Fahrenheit temperature is: \n" << fahrenheit << endl;
return 0;
}
 
 
