#include "Point.hpp"
#include <iostream>
using namespace std;

int main()
{
	double dist;
	
	Point p1(-1.5, 3.0);
	Point p2(1.5, 4.0);
	dist = p1.distanceTo(p2);
	cout << dist << endl;
	return 0;
}

