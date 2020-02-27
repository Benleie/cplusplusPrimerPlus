// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>
int main(int argc, char const *argv[])
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "cowgirl";

	cout << "Hi, I'am " << name2;
	cout << "! And what's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";

	cout << "in a array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: "
		<< name2 << endl;
	return 0;
}