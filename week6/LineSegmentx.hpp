/****************************************************
** Name : Jon Raleigh
** Date : 2/15/17
** Description : Header for LineSegment class
***************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"


class LineSegment
{
	private:
		double end1X;	
		double end1Y;
		double end2X;
		double end2Y;
		double e1X;
		double e1Y;
		double e2X;
		double e2Y;
		Point pt1;
		Point pt2;

	public:
		LineSegment();
		LineSegment(Point, Point);
		void setEnd1(Point);
		void setEnd2(Point);
		double getEnd1(double, double);
		double getEnd2(double, double);
		double length();
		double slope();

};
#endif 
