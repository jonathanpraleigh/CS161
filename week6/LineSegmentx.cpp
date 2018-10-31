/************************************************************
** Author : Jon Raleigh
** Date : 2/15/17
** Description : Class LineSegment sets end points and returns 
** line length and slope
************************************************************/

#include "LineSegment.hpp"
#include "Point.hpp"

LineSegment::LineSegment(Point X, Point Y)
  {
	LineSegment::setEnd1(X);
	LineSegment::setEnd2(Y);
  }

void LineSegment::setEnd1(Point pt1)
  {
	end1X = pt1.getXCoord();
	end1Y = pt1.getYCoord();
  }

void LineSegment::setEnd2 (Point pt2)
  {
	end2X = pt2.getXCoord();
	end2Y = pt2.getYCoord();
  }

double LineSegment::getEnd1(double e1X, double e1Y)
  {
	e1X = pt1.getXCoord();
	e1Y = pt1.getYCoord();
  }

double LineSegment::getEnd2(double e2X, double e2Y)
  {
	e2X = pt2.getXCoord();
	e2Y = pt2.getYCoord();  
  }

double LineSegment::length()
  {
	return pt1.distanceTo(pt2);
  }

double LineSegment::slope()
  {
	return (e2X - e1X)/(e2Y - e1Y);

  }

	
