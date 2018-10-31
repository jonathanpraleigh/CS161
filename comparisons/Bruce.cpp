/*********************************************************************
 * Author: Bruce Webster
 * Date: 2/22/2017
 * Description: Function findMode that takes as parameters an array of
 * 		int and the size of the array and returns a vector con-
 * 		taining the mode(s) in ascending order.
 ********************************************************************/ 		 

//This program has a function that takes as parameters an array of int
//and the size of the array and returns a vector containing the mode(s)
//in ascending order.

#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

#define N 100
vector<int> findMode(const int nums[], int size);

/*********************************************************************
 * 		findMode
 * This function takes an array as parameter, finds the mode, and re-
 * turns a vector. If more than one mode, function returns modes in 
 * ascending order.
 * ******************************************************************/
vector<int> findMode(const int nums[], int size)
{
    int y[N] = {0},			// Holds count set to zero
        dup[N] = {0};                   // Duplicate to maintain array
    
    int index,                          // Subscript
        i,				// Inner loop subscript
        count,                          // Frequency counter 
        compHold;                       // Comparison variable 

        vector<int> mode;               // Return vector
    
    for ( index = 0; index < size; index++) //copy of passed array  
         dup[index] = nums[index];

    std::sort(dup, dup+size);           //pre-sort of copy array


    // For loop to count occurances of element values
    for ( index = 0; index < size ; index++)
         {
         count = 0;			// Initialize count
	 compHold = dup[index];		// Hold array value to compare 
              for (i = index; i < size  ; i++)
              {
                   if(compHold==dup[i]) // Frequency counter
                   count++;		 
              }
              y[index] = count;         // Assigns count to element
         }
    
    // For loop to identify mode value
    int hiFreq = y[0];                  // Initialize for mode 
    for ( index = 1; index < size; index++)
    {
         if (y[index] > hiFreq)
	 hiFreq = y[index];
    }
         
    // For loop to initialize vector
    for ( count = 0; count < size; count++)
    {        
         if ( y[count] == hiFreq)
         mode.push_back( dup[count] );
    } 

    // Sort mode values in ascending order
    std::sort( mode.begin(), mode.end());
    
    return mode;
}
