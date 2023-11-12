#include <iostream>
#include <string>
using namespace std;

bool containsInvalidLetters(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'k' || word[i] == 'm' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
        {
            return true; // Word contains invalid letters
        }
    }
    return false; // Word is valid
}

string longest7SegmentWord(string word[], int n)
{
    int maximum = 0;
    string result = "";

    for (int i = 0; i < n; i++)
    {
        string currentWord = word[i];
        if (!containsInvalidLetters(currentWord))
        {
            if (currentWord.length() > maximum)
            {
                result = currentWord;
                maximum = currentWord.length();
            }
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the number of words: ";
    cin >> n;

    string word[n];
    cout << "Enter the words one by one: \n";

    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    string longestWord = longest7SegmentWord(word, n);
    if (longestWord.empty())
    {
        cout << "No eligible words.";
    }
    else
    {
        cout << "Longest seven segment word: " << longestWord;
    }

    return 0;
}
