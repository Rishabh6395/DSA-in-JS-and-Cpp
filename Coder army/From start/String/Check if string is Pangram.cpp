#include <iostream>
#include <vector>
using namespace std;

bool checkPangram(string sentence)
{
    vector<bool> alpha(26, 0);
    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    };
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    vector<string> testCases = {
        "thequickbrownfoxjumpsoverthelazydog",         // true
        "abcdefghijklmnopqrstuvwxyz",                  // true
        "hello world",                                 // false
        "pack my box with five dozen liquor jugs",     // true
        "abcdefg",                                     // false
        "Sphinx of black quartz, judge my vow",        // false (has uppercase, not handled)
        "the quick brown fox jumps over the lazy dog", // false (spaces, not handled)
    };

    for (int i = 0; i < testCases.size(); ++i)
    {
        string s = testCases[i];
        cout << "Test case " << i + 1 << ": '" << s << "'\n";
        cout << "Is pangram? " << (checkPangram(s) ? "Yes" : "No") << "\n\n";
    }
    return 0;
}