/************************************************
** Author : Jon Raleigh
** Date :  3/1/17
** Description : Function that takes the address of 
** three int variables and sorts the ints at those
** addresses in ascending order.
*************************************************/

#include <iostream>

using namespace std;

void smallSort2(int*, int*, int*);

/*int main()
{
	int a, b, c;
	
	cout << "First: ";
	cin >> a;
	cout << "\nSecond: ";
	cin >> b;
	cout << "\nThird: ";  
	cin >> c;

	smallSort2(&a, &b, &c);

	cout << "Your numbers are " << a << ", " << b << ", " << c << endl;

	return 0;
} */

void smallSort2 (int* firstNum, int* secondNum, int* thirdNum)
{

	if (*firstNum > *secondNum)
	  {
		int holder = *firstNum;
		*firstNum = *secondNum;
		*secondNum = holder;  
	  }
	if (*firstNum > *thirdNum)
	  {
		int holder = *firstNum;
		*firstNum = *thirdNum;
		*thirdNum = holder;
	  }
	if (*secondNum > *thirdNum)
	  {
		int holder = *secondNum;
		*secondNum = *thirdNum;
		*thirdNum = holder;
	  }

	return;
}	 
	

