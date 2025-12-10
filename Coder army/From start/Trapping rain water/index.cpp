#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    int n = (int)height.size();
    if (n == 0)
        return 0;
    int water = 0;
    int leftmax = 0, rightmax = 0;

    // find index of maximum height
    int maxheight = height[0], index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (height[i] > maxheight)
        {
            maxheight = height[i];
            index = i;
        }
    }

    // accumulate from left up to max index
    for (int i = 0; i <= index; ++i)
    {
        if (height[i] < leftmax)
            water += leftmax - height[i];
        else
            leftmax = height[i];
    }

    // accumulate from right down to max index
    for (int i = n - 1; i >= index; --i)
    {
        if (height[i] < rightmax)
            water += rightmax - height[i];
        else
            rightmax = height[i];
    }

    return water;
}

int main()
{
    // Simple test runner for trap()
    auto runTest = [&](const vector<int> &arr, int expected, const string &name)
    {
        vector<int> v = arr; // trap expects non-const reference
        int got = trap(v);
        cout << name << ": arr = [";
        for (size_t i = 0; i < arr.size(); ++i)
        {
            cout << arr[i];
            if (i + 1 < arr.size())
                cout << ", ";
        }
        cout << "] -> got = " << got << ", expected = " << expected;
        if (got == expected)
            cout << " [PASS]";
        else
            cout << " [FAIL]";
        cout << "\n";
    };

    runTest({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}, 6, "LeetCode classic");
    runTest({4, 2, 0, 3, 2, 5}, 9, "Example 2");
    runTest({1, 0, 2}, 1, "Small pit");
    runTest({}, 0, "Empty array");
    runTest({2, 0, 2}, 2, "Two walls");

    return 0;
}