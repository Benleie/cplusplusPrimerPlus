// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    // cin.get(ch);        // attempt to read a char
    // while (cin.fail() == false)  // test for EOF
    while(cin.get(ch))   //cin.get()返回cin对象，该cin对象在这里被转换为bool值
    {
        cout << ch;     // echo character
        ++count;
        //cin.get(ch);    // attempt to read another char
    }
    cout << endl << count << " characters read\n";
    return 0; 
}
