#include <iostream>
#include <string>
using namespace std;

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenKeys = "";  //this is to store the result.
    //Iterate through each character in the correctPhrase and actualTyped strings as the length of both is same so one is given in condition.
    for (int i = 0; i < correctPhrase.length(); i++)
    {
        bool keyAlreadyAdded = false; //checking if the key has already been added to brokenKeys or not
        for (int j = 0; j < brokenKeys.length(); j++)  //checking for duplicate in brokenkeys
        {
            if (correctPhrase[i] == brokenKeys[j])
            {
                keyAlreadyAdded = true;
                break;
            }
        }
        //If the key has not already been added and the characters don't match, add it to brokenkeys
        if (!keyAlreadyAdded && correctPhrase[i] != actualTyped[i])
        {
            brokenKeys += correctPhrase[i];
        }
    }
    return brokenKeys;
}

int main()
{
    string correctPhrase, actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);
    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
    return 0;
}
