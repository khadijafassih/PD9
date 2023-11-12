#include <iostream>
#include <string>
using namespace std;

void convertPINToDance(string pin)
{
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    //Checking if the input is a valid four-digit PIN by taking the length
    if (pin.length() != 4)
    {
        cout << "Invalid input." << endl;
        return;
    }

    //Converting each digit of the PIN to its corresponding dance move
       /*dry running process
       For i = 0:
       pin[0] - '0' is equivalent to 3.
       3 + 0 is 3.
       3 % 10 is still 3.
       So, move[3] is "Slide", and it is printed.
       , is printed since i < 3.*/

    for (int i = 0; i < 4; i++)
    {
        int index = (pin[i] - '0' + i) % 10; //using modulus to cycle through the moves
        cout << moves[index];
        if (i < 3) //this one is for placing commas
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    getline(cin, pin);
    convertPINToDance(pin);
    return 0;
}
