/**********************************************************
** Author : Jon Raleigh
** Date : 2/1/17
** Description : hailstone takes a number, alters it, and 
** tells the user how many steps until it reaches 1 
*********************************************************/

#include <iostream>
using namespace std;

int hailstone (int currentInteger);

/*int main()
{  
	int currentInteger, counter;
	cout << "Please enter a starting integer." << endl;
	cin >> currentInteger;

	counter = hailstone (currentInteger);

	cout << "Your number skipped " << counter << " steps." << endl;
	return 0;
}*/

/******************************************************
** Description : hailstone divides a number by 2 if even, and if odd,
multiplies by 3 and adds one. Counter the numbers of steps to
get to 1
******************************************************/

int hailstone (int currentInteger)
{
	int counter; // starting counter at 0
	while (currentInteger != 1 ) // so that 1 returns result of 0
	  {
		if (currentInteger % 2 == 0) //Evens 
		  {
			currentInteger = currentInteger / 2;
			counter++;
		  }
		else //odds
		  {
			currentInteger = (currentInteger * 3 ) + 1;
			counter++;
		  };
	  }
	return counter; //sending counter back to function above
}
 
 
