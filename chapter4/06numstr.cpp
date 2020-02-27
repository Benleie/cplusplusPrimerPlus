//numstr.cpp -- following number input with line input
#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	
	cout << "What year was your house built?\n";
	int year;

	//在输入队列中丢弃换行符
	(cin >> year).get();
	cout << "What is its street adress?\n";
	char adress[80];
	cin.getline(adress,80);
	cout << "Year built: " << year << endl
		<< "Adress: " << adress << endl
		<< "Done!\n";

	return 0;
}