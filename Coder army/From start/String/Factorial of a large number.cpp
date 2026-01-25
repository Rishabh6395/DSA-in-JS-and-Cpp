#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> factorial(int n)
{

    vector<int> ans(1, 1);

    while (n > 1)
    {
        int carry = 0, res, size = ans.size();
        for (int i = 0; i < size; i++)
        {
            res = ans[i] * n + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    // Test cases for factorial of a large number
    vector<int> test_values = {0, 1, 5, 10, 20, 50, 100};
    for (int n : test_values)
    {
        vector<int> result = factorial(n);
        cout << "Factorial of " << n << " is: ";
        for (int digit : result)
            cout << digit;
        cout << endl;
    }
    return 0;
}