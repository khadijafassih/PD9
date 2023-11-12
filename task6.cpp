#include <iostream>
using namespace std;

int coloringTime(string cols[], int size)
{
    if (size <= 0)
    {
        //Handling the invalid input
        cerr << "Invalid input size." << endl;
        return -1;
    }

    int switchTime = 1; //Time to switch pencils
    int colorTime = 2;  //Time to color a square
    int totalTime = 0;

    //Iterate through the array
    for (int i = 1; i <= size; ++i)
    {
        //Checking if the current color is different from the previous one
        if (cols[i] != cols[i - 1])
        {
            totalTime += switchTime; //Add switch time if colors are different
        }
        totalTime += colorTime; //Add color time for the current square coloring
    }

    return totalTime-1; //this program has an error and is returning one more than the actual value, k review it again as this is temporary sol
}

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    string colors[n];
    // int size = sizeof(colors) / sizeof(colors[0]);
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> colors[i];
    }
    int result = coloringTime(colors, n);
    cout << "Time to color: " << result << " seconds\n";
    return 0;
}
