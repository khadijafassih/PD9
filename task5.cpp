#include <iostream>
using namespace std;

int countingCommonCharacters(string s1, string s2)
{
    int count = 0;

    //iterate through each character in the first string
    for (int i = 0; s1[i] != '\0'; ++i)
    {
        //check if the character is present in the second string
        for (int j = 0; s2[j] != '\0'; ++j)
        {
            if (s1[i] == s2[j])
            {
                count++;
                //setting the character in the second string to '\0' to avoid double counting
                s1[j] = '$';
                s2[j] = '$';
                break; //move to the next character in the first string
            }
        }
    }

    return count;
}

main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the first string: ";
    getline(cin, s2);
    cout << "Number of common characters: "<< countingCommonCharacters(s1, s2);
}
