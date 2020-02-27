//instr1.cpp -- reading more than one string with get()
#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert: \n";
	cin >> dessert;
	cout << "I have some delicious " << dessert
		<< " for you, " << name << ".\n";
	return 0;
}