#include <iostream>
#include <cmath>       //no use
#include <iomanip>     //no use
using namespace std;
bool isLengthEven(string s)
{
    //store length of string into a variable
    int len = s.length();         //.lenght is for returning the no. of characters in a string
    if (len % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
main()
{
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    cout << isLengthEven(s);
}
