/******************************************************
** Author : Jon Raleigh
** Date : 2/8/17
** Description : Header file for box object, which takes
** three paramaters and passes them to volume and surface
** area calculation methods.
*******************************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
	private:

		double length;
		double width;
		double height;
	
	public:
		Box();
		Box (double, double, double);
		void setHeight(double);
		void setWidth(double);
		void setLength(double);
		double getVolume();
		double getSurfaceArea();
};
#endif
