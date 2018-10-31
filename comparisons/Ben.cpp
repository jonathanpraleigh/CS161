/**********************************************************************
** Author: Ben Tesch
** Date: 22 Feb 2017
** Description: findMode takes in an array of ints (inputArray)
**              and the size of the array (arraySize).
**              It returns a vector of all the integer values
**              from inputArray that occur most frequently --
**              these are the mode(s) of inputArray.
***********************************************************************/

#include <vector>
#include <algorithm>

std::vector<int> findMode(const int inputArray[], int arraySize) 
{
  // return variable
  std::vector<int> modeVector;
  if (arraySize < 1)
    return modeVector;
  
  // make a sorted copy of the input array
  // so that all identical elements are adjacent
  std::vector<int>sortedInput(inputArray, inputArray + arraySize);
  std::sort(sortedInput.begin(), sortedInput.end());
  
  // maxCount stores maximum number of occurrences
  // of any element found so far
  int maxCount = 1;
  // index points to first occurrence of the unique
  // value under test
  int index = 0;
  
  // populate modeVector
  while (index < arraySize)
  {
    // unique integer value under test
    int testValue = sortedInput.at(index);
    // count the number of occurrences of testValue
    int testCount = 1;
    while (index+testCount < arraySize && 
           testValue == sortedInput.at(index+testCount))
      testCount++;
      
    if (testCount > maxCount) {
      maxCount = testCount;
      // reinitialize modeVector with newly-found modal candidate
      modeVector.clear();
      modeVector.push_back(testValue);
    } else if (testCount == maxCount) {
      // append modal candidate to modeVector
      modeVector.push_back(testValue);
    }
    
    // point index to next unique value
    index += testCount;
  }
  
  return modeVector;
}
