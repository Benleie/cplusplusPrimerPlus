// more string class features
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy_s(char1, char2);

	str1 += " paste";
	strcat_s(char1, " juice");

	cout << "The string " << str1 << " contains "
		<< str1.size() << " characters.\n";
	cout << "The string " << char1 << " contains "
		<< strlen(char1) << " characters.\n";

	return 0;
}