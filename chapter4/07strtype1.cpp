// strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "Enter a kind of feline: ";
	cin >> char1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << char1 << " " << char2  << ""
		<< str1 << " " << str2 << endl;
	cout << "The third letter in " << char2	<< " is "
		<< char2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;

	return 0;
}