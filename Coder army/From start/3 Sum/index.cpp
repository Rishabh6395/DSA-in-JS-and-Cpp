#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool find3Sum(int a[], int n, int x)
{

    // sort the array first (bubble sort)
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // 3 pointer:

    for (int i = 0; i < n - 2; i++)
    {
        int ans = x - a[i];
        int start = i + 1, end = n - 1;
        while (start < end)
        {
            if (a[start] + a[end] == ans)
                return 1;
            else if (a[start] + a[end] > ans)
                end--;
            else
                start++;
        }
    }
    return 0;
}

int main()
{
    // Simple, easy-to-follow examples demonstrating find3Sum.
    // Note: find3Sum sorts the array in-place, so each test uses its own array.
    auto test = [&](int arr[], int n, int target, const string &name)
    {
        cout << "Test - " << name << "\n";
        cout << "  Input: [";
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i];
            if (i + 1 < n)
                cout << ", ";
        }
        cout << "]  target=" << target << "\n";
        bool found = find3Sum(arr, n, target);
        cout << "  Result: " << (found ? "Found a triplet" : "No triplet") << "\n\n";
    };

    int a1[] = {1, 4, 45, 6, 10, 8};
    test(a1, sizeof(a1) / sizeof(a1[0]), 22, "Example 1 (4+10+8)");

    int a2[] = {1, 2, 4, 3, 6};
    test(a2, sizeof(a2) / sizeof(a2[0]), 9, "Example 2 (1+2+6)");

    int a3[] = {1, 2, 3, 4, 5};
    test(a3, sizeof(a3) / sizeof(a3[0]), 50, "No triple");

    int a4[] = {-1, 0, 1, 2};
    test(a4, sizeof(a4) / sizeof(a4[0]), 2, "Negatives included (-1+1+2)");

    int a5[] = {0};
    test(a5, sizeof(a5) / sizeof(a5[0]), 0, "Single element");

    return 0;
}