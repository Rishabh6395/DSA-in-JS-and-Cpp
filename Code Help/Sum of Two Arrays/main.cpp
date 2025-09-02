#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a vector and return it
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    { // Fix: should be s < e
        swap(v[s++], v[e--]);
    }
    return v;
}

// Function to find the sum of two arrays representing numbers
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;

    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    { // Fix: should be i >= 0
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // First case: remaining digits in a
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10; // Fix: should be sum % 10
        ans.push_back(sum);
        i--;
    }
    // Second case: remaining digits in b
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10; // Fix: should be sum % 10
        ans.push_back(sum);
        j--; // Fix: should be j--
    }
    // Third case: remaining carry
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10; // Fix: should be sum % 10
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main()
{
    vector<int> a = {9, 9, 9}; // Example: 999
    vector<int> b = {1};       // Example: 1
    int n = a.size();
    int m = b.size();

    vector<int> result = findArraySum(a, n, b, m);

    cout << "Sum: ";
    for (int digit : result)
    {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
