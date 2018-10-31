/****************************************************
** Author: Jon Raleigh
** Date: 2/22/17
** Description: Locates the modes in an array and
** returns them in ascending order.
****************************************************/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*vector <int> findMode(int numbers[], int size);

int main()
  {
	vector <int> stuff;

	int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	stuff = findMode (nums, 10);

	for (int count = 0; count < stuff.size(); count++)
		{cout << stuff[count] << " ";}
	cout << "\n" << endl;
	return 0;
  } 
*/
vector <int> findMode (int nums[], int size)
{

int index;
int compare;
int highestFreqHolder;
int highestFreqChamp;
int counter = 0;
int passer;
vector <int> result;

/*In this for loop, I'm running through the list of numbers to find the
record holder for most occurences. Each loop in the for (compare) loop
adds to the highest frequency holder and the current champ is stored for
the next nested loop */
 
for (index = 0; index < size; index++)
  {
	highestFreqHolder = 0;

	for (compare = 0; compare < size; compare++)
	  {

		if (nums[index] == nums[compare])
		  {	
			highestFreqHolder = highestFreqHolder + 1;
		  }
	  }	

	if (highestFreqHolder > highestFreqChamp)
		{highestFreqChamp = highestFreqHolder;}
	highestFreqHolder = 0;
  }

/* This for loop takes the highest frequency champion above and compares
it to the count for matches. By starting the compare counter at the 
index #, I'm avoiding redundancy, which I had a huge problem with when
trying to figure this out earlier. */


for (index = 0; index < size; index++)
  {
	counter = 0;

	for (compare = index; compare < size; compare++) 
	  {

		if (nums[index] == nums[compare])
		  {
			passer = nums[index];
			counter++;
		  }
	   } 	
/*the following takes integers with numbers of appearances matching
the champ number and uses push_back to populate the vector.*/
   
	if (counter == highestFreqChamp)
  		  {result.push_back(passer);}
	  
  }

sort(result.begin(), result.end()); 

return result;
}




