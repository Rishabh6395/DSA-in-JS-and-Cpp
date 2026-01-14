#include <iostream>
#include <vector>
using namespace std;

int longestPalindrome(string s)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower[s[i] - 'a']++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper[s[i] - 'A']++;
        }
    }
    int count = 0;
    bool odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (lower[i] % 2 == 0)
        {
            count += lower[i];
        }
        else
        {
            count += lower[i] - 1;
            odd=1;
        }
        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            count += upper[i] - 1;
            odd = 1;
        }
    }
    return count + odd;
}

int main()
{
    vector<pair<string, int>> testCases = {
        {"abccccdd", 7}, // can form "dccaccd"
        {"a", 1},        // single character
        {"bb", 2},       // two same characters
        {"Aa", 1},       // case sensitive, only one can be used
        {"abc", 1},      // only one character can be used
        {"aabbcc", 6},   // all can be used
        {"AaBbCc", 3},   // only one from each case
        {"", 0},         // empty string
        {"abAB", 1},     // only one can be used
    };
    for (auto &tc : testCases)
    {
        int result = longestPalindrome(tc.first);
        cout << "Input: '" << tc.first << "' | Expected: " << tc.second << " | Got: " << result << endl;
    }
    return 0;
}