#include <iostream>
using namespace std;

void evenOddTransform(int arr[], int size, int n)
{
    int result[size];

    //Apply even-odd transformation n times
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < size; i++)
        {
            result[i] = (arr[i] % 2 == 0) ? arr[i] - 2 : arr[i] + 2;
        }

        //Update the original array with the transformed values
        for (int i = 0; i < size; i++)
        {
            arr[i] = result[i];
        }
    }

    //Output the array in the desired format
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << result[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main()
{
    int size, n;
    cout << "Enter the size of Array: ";
    cin >> size;

    int word[size];
    //iterate through n or the size ofan array to take input accordingly
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> word[i];
    }
    cout << "Enter number of times even-odd transformation needs to be done: ";
    cin >> n;
    evenOddTransform(word, size, n);
    return 0;
}
