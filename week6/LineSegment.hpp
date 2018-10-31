/**************************************************
** Author: Jon Raleigh
** Date: 2/15/17
** Description : LineSegment Class Header
***********************************************/  

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

using namespace std;

class LineSegment
  {
	private:
		double end1X;
		double end1Y;
		double end2X;
		double end2Y;
		double displayLength;
		Point end1;
		Point end2;

	public:
		LineSegment(Point, Point);
		Point getEnd1();
		Point getEnd2();
		void setEnd1 (Point);
		void setEnd2 (Point);
		double length();
		double slope ();
  };
#endif
