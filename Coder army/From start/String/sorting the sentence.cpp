#include <iostream>
#include <vector>
using namespace std;

string sortingSentence(string s) {
    vector<string> words(10); // max 9 words
    string temp;
    int count = 0;

    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            int pos = temp.back() - '0'; // last char is position
            temp.pop_back();             // remove digit
            words[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[i];
        }
    }

    string result;
    for (int i = 1; i <= count; i++) {
        result += words[i] + " ";
    }

    result.pop_back(); // remove trailing space
    return result;
}

int main() {
    string s1 = "is2 sentence4 This1 a3";
    cout << sortingSentence(s1) << endl;

    string s2 = "Myself2 Me1 I3";
    cout << sortingSentence(s2) << endl;

    string s3 = "Hello1";
    cout << sortingSentence(s3) << endl;

    string s4 = "a1 b2 c3";
    cout << sortingSentence(s4) << endl;

    string s5 = "third3 second2 first1";
    cout << sortingSentence(s5) << endl;

    return 0;
};
