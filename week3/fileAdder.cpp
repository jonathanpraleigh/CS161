/***************************************************
** Author: Jonathan Raleigh 
** Date: 1/25/17
** Description: Adds values from specified file and creates new sum.txt file with sum.
***************************************************/

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile; // file stream object
	string fileName; // creates a string variable for the file name. 
	int value, total; // value read from file, and total which holds the sum


	cout << "Please enter the name of a file." << endl;
	cin >> fileName; // user enters the fileName

	inputFile.open(fileName); // system opens the specified file 

	if (inputFile) // if true that inputFile filename exists
	  {
		while ( inputFile >> value ) // loop continues while there are values to be read
		  {
			total += value;	// adds value to the total
		  } 

		inputFile.close(); // closes the inputFile
 	  }
	else
	  {
		cout << "could not access file." << endl; // returns error if filename doesn't exist
	  }
 
	ofstream outputFile; 
	outputFile.open("sum.txt"); // creates output file sum.txt

	outputFile << total;	//writes total to output file

	outputFile.close(); // closes output file

	return 0;
}







 
