/******************************************************************
** Author: Jonathan Raleigh
** Date: 01/17/2017
** Description: Project 2.c - change.cpp
******************************************************************/
#include <iostream>
using namespace std;

int main()
{
cout << "Please enter an amount in cents less than a dollar." << endl;
int cents, quarter, dime, nickle, penny;
cin >> cents;
quarter = cents / 25;
cents = cents % 25;
dime = cents / 10;
cents = cents % 10;
nickle = cents / 5;
cents = cents % 5;
cout << "Your change will be:\n" << "Q: " << quarter << "\nD: " << dime << "\nN: " << nickle << "\nP: " << cents << endl;
return 0;
}
   
