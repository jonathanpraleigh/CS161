/*****************************************************************************
** Author: Jonathan Raleigh
** Date: 01/17/2017
** Description: Project 2.a - average.cpp
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
cout << "Please enter five numbers." << endl;
double num1, num2, num3, num4, num5, average;
cin >> num1;
cin >> num2;
cin >> num3;
cin >> num4; 
cin >> num5;
average = ( num1 + num2 + num3 + num4 + num5 ) / 5;
cout << "The average of those numbers is: \n" << average << endl;
return 0;
}
  
