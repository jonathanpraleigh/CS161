/**********************************************************
** Author : Jon Raleigh
** Date : 2/8/17
** Description : Box class implementation file
********************************************************/

#include "Box.hpp"

//default constructor that initializes all three values to 1.
Box::Box()
  {
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
  }


//Constructor that passes three values to the set functions below
Box::Box(double H, double W, double L)
  {
	setHeight(H);
	setWidth(W);
	setLength(L);
  }

//not commenting on sets and gets going forward per code style guidelines
void Box::setHeight(double H)
  {
	height = H;
  }


void Box::setWidth(double W)
  {
	width = W;
  }


void Box::setLength(double L)
  {
	length = L;
  }


double Box::getVolume()
  {
	return length * width * height;
  }

 
double Box::getSurfaceArea()
  {
	return 2 * length * width + 2 * length * height + 2 * width * height ;			
  }
//didn't feel the need to parenthesis off the formula since PEMDAS holds true
 
