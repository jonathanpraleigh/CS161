/*********************************************************
** Author : Jon Raleigh
** Date :  2/1/17
** Description : Sorts three int paramaters by value in ascending order
********************************************************/

#include <iostream>
using namespace std;

void smallSort (int&, int&, int&);

/*int main()
{
	int a = 14; 
	int b = -90;
	int c = 2;

	smallSort(a, b, c);

	cout << a << ", " << b << ", " << c << endl;
	return 0;
}
*/

/*******************************************************
** Description : smallSort sorts three provided values
** from smallest to largest
******************************************************/

void smallSort(int &a, int &b, int &c)
{
	int val1, val2, val3;
/* Chose to sort into one of six possible if/else here instead of copying the example from the book. It's more of a brute force solution to the problem, but it works. Also created three temp values to store the results and reasign at the end rather than juggle them around.*/   
	if ((a>b) && (a>c) && (b>c))
	  {
		val3 = a;
		val2 = b;
		val1 = c;
	  }
	else if ((a>b) && (a>c) && (c>b))
	  {
		val3 = a;
		val2 = c;
		val1 = b;
	  }
	else if ((b>a) && (b>c) && (a>c))
	  {
		val3 = b;
		val2 = a;
		val1 = c;
	  }
	else if ((b>a) && (b>c) && (c>a))
	  {
		val3 = b;
		val2 = c;
		val1 = a;
	  }
	else if ((c>a) && (c>b) && (a>b))
	  {
		val3 = c;
		val2 = a;
		val1 = b;
	  }
 	else if ((c>a) && (c>b) && (b>a))
	  {
		val3 = c;
		val2 = b;
		val1 = a;
	  }

	a = val1;
	b = val2;
	c = val3;

}

