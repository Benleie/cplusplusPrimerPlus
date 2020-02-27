//instr1.cpp -- reading more than one string with getline
#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert: \n";
	cin >> dessert;
	cout << "I have some delicious " << dessert
		<< " for you, " << name << ".\n";
	return 0;
}