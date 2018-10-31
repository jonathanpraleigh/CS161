/****************************************************
** Author : Jon Raleigh
** Date : 2/1/17
** Description : function will calculate the distance fallen within the time 
** 		provided in main
***************************************************/
#include <iostream>
#include <cmath>
using namespace std;

double fallDistance( double fallTime );

/**int main() //comment out before turning in
{
	double fallTime, totalDistance;

	cout << "Please enter the time in seconds and I will tell you how far something has fallen given earth's gravity and no air resistance." << endl;
	cin >> fallTime; 

	totalDistance = fallDistance(fallTime);

	cout << "It has fallen " << totalDistance << " feet." << endl;
	return 0;
}
**/

/************************************************
** Description : fallDistance calculates the distance fallen
** within the time provided in main.
***********************************************/

double fallDistance ( double fallTime )
{
	double totalDistance; 	
	totalDistance = pow ( fallTime , 2.0 ) * 4.9; /*since using standard formula
abbreviated .5g to 4.9 */ 
	return totalDistance; //returning totalDistance to main
}

