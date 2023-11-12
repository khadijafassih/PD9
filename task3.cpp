#include <iostream>
using namespace std;

bool areAllElementsIdentical(string array[], int array_length)
{
    for (int i = 1; i < array_length; ++i)
    {
        //this is the condition for testing that the element in the loop variable is the same as the first element of the array
        if (array[i] != array[0])
        {
            return false; // If any element is different
        }
    }
    return true; 
}

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    string word[n];
    //iterate through n or the size ofan array to take input accordingly
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> word[i];
    }

    cout<<(areAllElementsIdentical(word, n));
        return 0;
}
