// arrayone.cpp -- small arrays of integers
#include <iostream>
using namespace std;
int main()
{
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[36] = {20, 30, 5};

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;

	cout << "Size of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[1] << " bytes.\n";
	return 0;



}