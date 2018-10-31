/**********************************************
** Name : Jon Raleigh
** Date : 2/15/17
** Description : Implementation File for the Point
** Class. Creates a point object and provides the
** distance between two points.  
***********************************************/

#include "Point.hpp"
using namespace std;


Point::Point()

  {
	setXCoord (0.0);
	setYCoord (0.0);
  } 


Point::Point(double xCo, double yCo)

  {
	setXCoord (xCo);
	setYCoord (yCo);
  }  


void Point::setXCoord (double xCo)

  {
	xCoord = xCo;
  }


void Point::setYCoord (double yCo)

  {
	yCoord = yCo;
  }  


double Point::getXCoord () 

  {
	return xCoord;
  }


double Point::getYCoord ()

  {
	return yCoord;
  }


/****************************************
** distanceTo function returns the distance
** between two point objects. I created an 
** additional value called distTo for my 
** LineSegment class to point to when I couldn't
** access the function, but it was not a good
** solution.
*********************************************/


double Point::distanceTo (const Point& secPt)  

  {
	double x2 = xCoord - secPt.xCoord;
	double y2 = yCoord - secPt.yCoord;
	distTo =  sqrt((x2 * x2) + (y2 * y2)); 
	return distTo;
  }




 
