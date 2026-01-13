#include <iostream>
#include <vector>
using namespace std;

string sortString(const string &s)
{
    vector<int> alpha(26, 0);
    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
            alpha[ch - 'a']++;
        else if (ch >= 'A' && ch <= 'Z')
            alpha[ch - 'A']++;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (alpha[i] > 0)
        {
            ans += c;
            alpha[i]--;
        }
    }
    return ans;
}

int main()
{
    vector<pair<string, string>> testCases = {
        {"cba", "abc"},
        {"zxyabc", "abcxyz"},
        {"", ""},
        {"aabbcc", "aabbcc"},
        {"BAC", "abc"},
        {"HelloWorld", "dehllloorw"},
        {"zyxwvutsrqponmlkjihgfedcba", "abcdefghijklmnopqrstuvwxyz"}};
    for (size_t i = 0; i < testCases.size(); ++i)
    {
        string input = testCases[i].first;
        string expected = testCases[i].second;
        string result = sortString(input);
        cout << "Test " << i + 1 << ": input='" << input << "'\n";
        cout << "Expected: '" << expected << "', Got: '" << result << "'\n";
        cout << (result == expected ? "PASS" : "FAIL") << "\n\n";
    }
    return 0;
}