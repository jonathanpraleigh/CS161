#include "LineSegment.hpp"
#include <iostream>

using namespace std;

int main ()
{
	double lineLength;
	double lineSlope;  

	Point p1(-1.5, 3.0);
	Point p2(1.5, 4.0);
	LineSegment ls1(p1, p2);
	lineLength = ls1.length();
	lineSlope = ls1.slope();
	cout << lineLength << endl << lineSlope << endl;
	return 0;
}
  
