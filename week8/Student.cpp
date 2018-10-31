/******************************************
** Author: Jon Raleigh
** Date : 3/1/17
** Description : Student Class. Inits the student class with name
** and score, also supplied is the get methods for both
** values. 
********************************************/
#include <iostream>
#include <string>
#include "Student.hpp"

using namespace std;

Student::Student()
  {
	name = " ";
	score = 0;
  }

Student::Student(string nameIn, double scoreIn)
  {  
	name = nameIn;
	score = scoreIn;
  }

string Student::getName()
  {
	return name;
  }

double Student::getScore()
  {
	return score;
  }

