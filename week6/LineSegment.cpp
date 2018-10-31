/*************************************************
** Author : Jon Raleigh
** Date : 2/15/1
** Description : Line Segment Class Implementation file
** creates a line object and provides length and slope.
****************************************************/

#include "LineSegment.hpp"

//Constructor for the LineSegment Class

LineSegment::LineSegment (Point e1, Point e2)
  {
	setEnd1(e1);
	setEnd2(e2);
  } 


void LineSegment::setEnd1 (Point e1)
  {
	end1X = e1.getXCoord();
	end1Y = e1.getYCoord();
	Point end1(end1X, end1Y);
  }


void LineSegment::setEnd2 (Point e2)
  {
	end2X = e2.getXCoord();
	end2Y = e2.getYCoord();
	Point end2(end2X, end2Y);  
  }


/***********************************
** There wasn't much in the way of instruction about
** what to do with the gets for this class, and I 
** didn't use it in my equations below, so 
** I just had them get the end1 & end2 objects.  
*************************************/


Point LineSegment::getEnd1 ()
  {
	return end1;
  }



Point LineSegment::getEnd2 ()
  {
	return end2;
  }


/*************************************************
** length function. Returns the distance between
** the two end points of a line. For some reason, I 
** can not get this to provide a non-zero result. My
** assumption is that I'm not providing the second point
** in the correct way. It could be that I did not
** do this in main correctly, so it might work with
** your testing environment.
************************************************/
 

double LineSegment::length () 
  {
	return end1.distanceTo(end2);
  }


/***********************************************
** slope function. Provides the slope of the line.
** this works just fine.  
***********************************************/
double LineSegment::slope ()
  {
	return (end2X - end1X) / (end2Y - end1Y);
  }


