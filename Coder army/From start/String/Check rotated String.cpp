#include <iostream>
using namespace std;

void rotateClockWise(string &s)
{
    char c = s[0];
    int index = 1;

    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

void rotateAntiClockWise(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

bool isRotated(string str1, string str2)
{
    if (str1.size() != str2.size())
        return 0;

    string clockWise, anticlockwise;
    clockWise = str1;
    rotateClockWise(clockWise);
    rotateClockWise(clockWise);

    if (clockWise == str2)
        return 1;

    anticlockwise = str1;
    rotateAntiClockWise(anticlockwise);
    rotateAntiClockWise(anticlockwise);

    if (anticlockwise == str2)
        return 1;

    return 0;
}

int main()
{

    // Test cases for isRotated
    string s1 = "amazon";
    string s2 = "azonam"; // Clockwise rotation by 2
    string s3 = "onamaz"; // Anticlockwise rotation by 2
    string s4 = "mazona"; // Not a valid 2-step rotation

    cout << "Test 1 (Clockwise): ";
    cout << (isRotated(s1, s2) ? "Pass" : "Fail") << endl;

    cout << "Test 2 (Anticlockwise): ";
    cout << (isRotated(s1, s3) ? "Pass" : "Fail") << endl;

    cout << "Test 3 (Negative): ";
    cout << (isRotated(s1, s4) ? "Fail" : "Pass") << endl;

    // Edge case: different lengths
    cout << "Test 4 (Different lengths): ";
    cout << (isRotated(s1, "amazonn") ? "Fail" : "Pass") << endl;

    // Edge case: empty strings
    cout << "Test 5 (Empty strings): ";
    cout << (isRotated("", "") ? "Pass" : "Fail") << endl;

    return 0;
}