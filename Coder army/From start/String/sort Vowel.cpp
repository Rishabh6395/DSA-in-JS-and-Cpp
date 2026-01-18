#include <iostream>
#include <vector>
#include <string>
using namespace std;

string sortVowl(string s)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    // Step 1: Count vowels and mark their positions
    for (int i = 0; i < s.size(); i++)
    {
        // lowercase vowels
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        // uppercase vowels
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    // Step 2: Build sorted vowel string
    string vowel;

    // uppercase vowels first
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i] > 0)
        {
            vowel += c;
            upper[i]--;
        }
    }

    // lowercase vowels
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i] > 0)
        {
            vowel += c;
            lower[i]--;
        }
    }

    // Step 3: Replace '#' with sorted vowels
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            s[i] = vowel[j++];
        }
    }

    return s;
}


int main()
{
    // Test case 1: Only lowercase vowels
    cout << "Test 1: " << sortVowl("aeiou") << "\n"; // Expected: aeiou
    // Test case 2: Only uppercase vowels
    cout << "Test 2: " << sortVowl("UOIEA") << "\n"; // Expected: AEIOU
    // Test case 3: Mixed vowels and consonants
    cout << "Test 3: " << sortVowl("hello") << "\n"; // Expected: hello
    // Test case 4: Mixed case vowels
    cout << "Test 4: " << sortVowl("hEllO") << "\n"; // Expected: hEllO
    // Test case 5: No vowels
    cout << "Test 5: " << sortVowl("bcdfg") << "\n"; // Expected: bcdfg
    // Test case 6: Empty string
    cout << "Test 6: " << sortVowl("") << "\n"; // Expected: (empty)
    // Test case 7: Vowels at start and end
    cout << "Test 7: " << sortVowl("aXbEcIdOufU") << "\n"; // Expected: EXbIcOdUafu
    return 0;
}