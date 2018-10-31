/*************************************************************
** Author: Carrie Box
** Date: 02/22/2017
** Description: This program takes a list of integers in an
**				array, sorts them, and finds the highest 
**				frequency of an integer.
*************************************************************/

#include <iostream>
#include <vector> // needed to use vectors
#include <algorithm> //needed to use sort() function

/*************************************************************
** This function takes a group of integers in an unsorted 
** list and sorts them ascendingly to begin finding any 
** frequencies that may appear throughout the array. 
*************************************************************/

void findMode(int num[], int size, std::vector<int> &result)
{
	std::sort(num, num + size); // sorts the array

	int maxFreq = 0; // variable to store the highest value found

	int count = 1; // variable to count frequencies, beginning
				   // with variable i that is initialized 
				   // in the for loop
				
	/*************************************************************
	** This for loop goes through all the integers in a given 
	** array. Integer (i) is initially set to 0, it is then 
	** compared to the size of the array, and then increments
	** to loop again. 
	*************************************************************/
	for (int i = 0; i < size; i++) {
		int n = num[i];

		/*************************************************************
		** If the integer is not the last item in the array and the
		** current number is the same number as the next item in the
		** array, then we increment our frequency count.
		*************************************************************/
		if (i < size - 1 && n == num[i + 1]) {
			count++;
		}
		else {
			// check to see if we need to update our max frequency
			if (count > maxFreq) {
				// update our max frequency number
				maxFreq = count;

				// remove any modes from the result because 
				// there is a new mode with more frequencies
				result.clear();
			}
			
			/*************************************************************
			** If the number of frequencies that were found matches the
			** maximum number of occurrences, then we add that current
			** number as the new mode (maxFreq). That is to say that the 
			** result was previously cleared, so this statement allows 
			** us to add in the new frequency.
			*************************************************************/
			if (count == maxFreq) {
				result.push_back(n);
			}

			// resets frequency counter
			count = 1;
		}
	}

	// sorts all found modes
	std::sort(result.begin(), result.end());
}

/*
// main used for testing
int main()
{
	std::vector<int>result;

	// int num[] = { 23, 5, -10, 0, 0, 321, 1, 0, 99, 23 };  // array 1
	// int num[] = { 2, 2, 53, 3, 1, 2, 3, 99, 0, 3 }; // array 2
	// int num[] = { 10, 10, 99, 3, 2, 3, 3, 10, 10, 10 }; // array 3
	int num[] = { 1, 4, 1, 5, 2, 4, 1, 4, 5, 0 }; // array 4
	
	int size = 10;

	findMode(num, size, result);

	std::cout << "Mode(s) that were found: \n";  // test output of the vector

	for (int vect = 0; vect < result.size(); vect++)
	{
		std::cout << result[vect] << " " << std::endl;
	}

	return 0;
}
*/
