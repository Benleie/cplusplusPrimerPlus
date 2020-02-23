// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
	using namespace std;
	int auks, coots, bats;
	//下列表达式将数值当做double计算，然后转换为int
	auks = 19.99 + 11.99;

	//下列表达式将数值当做int计算
	bats = (int) 19.99 + (int) 11.99; //old C syntax
	coots = int (19.99) + int (11.99); //new C++ syntax
	cout << "auks = " << auks
		<< ", bats = " << bats
		<< ", coots =" << coots << endl;
	char ch = 'Z';
	cout << "The code for " << ch << " is "
		<< int(ch) << endl;
	return 0;

}