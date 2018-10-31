#include <iostream>
#include "Box.hpp"

using namespace std;

int main()
{
	double volume1, volume2, surfaceArea1, surfaceArea2; 

	Box box1(2.4, 7.1, 5.0);
	Box box2;
	volume1 = box1.getVolume(); 
	surfaceArea1 = box1.getSurfaceArea();
	volume2 = box2.getVolume();
	surfaceArea2 = box2.getSurfaceArea();
	cout << volume1 << endl;
	cout << volume2 << endl;
	cout << surfaceArea1 << endl;
	cout << surfaceArea2 << endl;
	return 0;
}

