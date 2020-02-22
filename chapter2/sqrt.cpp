// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double area;
	cout << "输入你家卧室的面积：";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		<< " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}