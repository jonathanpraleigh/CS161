#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
	vector <int> stuff;
	int numbers[18]; 

	stuff = findMode (numbers[9, 8, 7, 7, 6, 9, 2, 3, 1, 5, 5, 5, 4, 4, 4, 1, 1, 1], 18);

	for (int count = 0; count < stuff.size(); count++)
		cout << stuff[count] << " ";
	cout << endl; 

	return 0;	
}
