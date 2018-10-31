/*************************************
** Author : Jon Raleigh 
** Date : 3/1/17
** Description : function that returns the standard deviation 
** from an array of pointers to class objects
**************************************/ 
#include <iostream>
#include <string>
#include <cmath>
#include "Student.hpp"


using namespace std;

double stdDev (Student *students[], int popSize);

double stdDev (Student *students[], int popSize)
{
	double mean;
	double totalFirst = 0.0;
	double totalSecond = 0.0;
	double variance;	
	double standardDev;	

	for (int i = 0; i < popSize; i++)
	  {
		totalFirst += students[i]->getScore();
	  }	
//loops through each student and returns the score, adding it to firstTotal.

	mean = totalFirst / popSize;

//finds the mean of the first total.

	for (int i = 0; i < popSize; i++)
	  {	
		totalSecond += pow(((students[i]->getScore()) - mean) , 2.0);
	  }

//loops through the students again, subtracting the mean and squaring the result 

	variance = totalSecond / popSize;

//determins the variance

	standardDev = sqrt(variance);

//calculates the standard deviation from the variance and returns it below.

	return standardDev;
} 
