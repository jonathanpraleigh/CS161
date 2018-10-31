/**********************************(
** Author: Jon Raleigh
** Date : 3/1/17
** Description : Header file for Student 
** Class  
************************************/
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	double score;

public:
	Student();
	Student (string, double);
	string getName();
	double getScore();
};
#endif
