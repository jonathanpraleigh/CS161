/*************************************************************
** Author: Jonathan Raleigh
** Date: 1/25/17
** Description: Assignment 3a - Gives min and max from list of integers
******************************************************/

#include <iostream>
using namespace std;

int main()
{

	int finalInteger, currentInteger, minInteger, maxInteger, countInteger = 1;

	cout << "How many integers would you like to enter?" << endl;
	cin >> finalInteger; //Total integers entered and ending point for while loop
	cout << "Please enter " << finalInteger << " integers." << endl;
	cin >> currentInteger; // Initial integer
	
	minInteger = currentInteger; // Sets initial min integer in loop
	maxInteger = currentInteger; // Sets initial max integer in loop

	while ( countInteger++ < finalInteger ) // tells the loop to stop at finalInteger
	  {
		cin >> currentInteger;  //New value that feeds into min amd max integers
		if ( currentInteger < minInteger )
			minInteger = currentInteger; //New value is set if conditions are met
		if ( currentInteger > maxInteger )
			maxInteger = currentInteger; //New value is set if conditions are met
	  }

	cout << "Min: " << minInteger << "\nMax: " << maxInteger << endl;

	return 0;
}

