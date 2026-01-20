#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string add(string num1, string num2)
{
    string ans;
    int index1 = num1.size() - 1, index2 = num2.size() - 1;
    int sum, carry = 0;

    while (index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index2--, index1--;
    }
    // index exists
    while (index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }
    if (carry)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string addString(string num1, string num2)
{

    if (num1.size() < num2.size())
    {
        return add(num2, num1);
    }
    else
    {
        return add(num1, num2);
    }
}

int main()
{
    // Test case 1: Same length, no carry
    cout << "Test 1: 123 + 456 = " << addString("123", "456") << endl;

    // Test case 2: Different lengths, no carry
    cout << "Test 2: 99 + 1 = " << addString("99", "1") << endl;

    // Test case 3: Same length, with carry
    cout << "Test 3: 789 + 567 = " << addString("789", "567") << endl;

    // Test case 4: Different lengths, with carry
    cout << "Test 4: 9999 + 1 = " << addString("9999", "1") << endl;

    // Test case 5: One number is zero
    cout << "Test 5: 0 + 12345 = " << addString("0", "12345") << endl;

    // Test case 6: Both numbers are zero
    cout << "Test 6: 0 + 0 = " << addString("0", "0") << endl;

    // Test case 7: Large numbers
    cout << "Test 7: 12345678901234567890 + 98765432109876543210 = " << addString("12345678901234567890", "98765432109876543210") << endl;

    return 0;
}