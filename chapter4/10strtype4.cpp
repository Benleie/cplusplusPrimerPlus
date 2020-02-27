// line input
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char charr[20];
	string str;
	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before inpiut: "
		<< str.size() << endl;

	cout << "Enter a line of text for charr:\n";
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;

	cout << "Enter a line of text for str:\n";
	getline(cin, str);
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str after inpiut: "
		<< str.size() << endl;


	return 0;
}