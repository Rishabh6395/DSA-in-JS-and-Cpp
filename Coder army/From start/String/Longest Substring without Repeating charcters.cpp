#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<bool> count(256, 0);
    int first = 0, second = 0, len = 0;

    while (second < s.size())
    {
        while (count[s[second]])
        {
            // Repeating Char
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        // len = max(len, second - first);
        len = max(len, second - first + 1);
        second++;
    }
    return len;
}

int main()
{
    // Test cases for lengthOfLongestSubstring
    vector<pair<string, int>> testCases = {
        {"abcabcbb", 3},
        {"bbbbb", 1},
        {"pwwkew", 3},
        {"", 0},
        {"abcdef", 6},
        {"abba", 2},
        {"dvdf", 3},
        {"aab", 2},
        {"tmmzuxt", 5}};

    for (size_t i = 0; i < testCases.size(); ++i)
    {
        int result = lengthOfLongestSubstring(testCases[i].first);
        cout << "Test case " << i + 1 << ": Input: '" << testCases[i].first << "' | Expected: " << testCases[i].second << " | Got: " << result;
        if (result == testCases[i].second)
        {
            cout << " [PASS]" << endl;
        }
        else
        {
            cout << " [FAIL]" << endl;
        }
    }
    return 0;
}