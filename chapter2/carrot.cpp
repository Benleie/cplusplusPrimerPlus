// carrot.cpp -- food processing program
// uses and displays a variable

#include <iostream>
using namespace std;
int main()
{
	int carrots;
	carrots = 5;

	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;

	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have "
		<< carrots
		<< " carrots."
		<< endl;
	return 0;
}