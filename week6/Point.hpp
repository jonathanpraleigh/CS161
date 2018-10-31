/***************************************************
** Author : Jon Raleigh
** Date : 2/15/17
** Description : Header file for the Point Class
**************************************************/

#ifndef POINT_HPP
#define POINT_HPP
#include <cmath>

using namespace std;

class Point
{
	private:
		double xCoord;
		double yCoord;
		double x2;
		double y2;
	public:
		double distTo;
		Point();
		Point(double, double);
		void setXCoord (double);
		void setYCoord (double);
		double getXCoord();
		double getYCoord();
		double distanceTo(const Point&);

};

#endif

