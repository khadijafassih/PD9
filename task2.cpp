#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the size of Array: ";
    cin >> n;

    int word[n];    //array of the size n
    //iterate through n or the size ofan array to take input accordingly
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Element " << i << ": ";
        cin >> word[i];
    }
    if (word[n] == 7)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "there is no 7 in the array";
    }
    return 0;
}