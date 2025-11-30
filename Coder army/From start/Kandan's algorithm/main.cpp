#include <iostream>
#include <climits>
using namespace std;

int kadansAlgo(int n, int arr[])
{
    int maxi = INT_MIN, prefix = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0)
        {
            prefix = 0;
        }
    }
    return maxi;
}

int main()
{

    // Test cases for Kadane's algorithm
    auto runTest = [&](int arr[], int n, const string &name)
    {
        cout << name << ": ";
        cout << "arr = [";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
            if (i + 1 < n)
                cout << ", ";
        }
        cout << "], max subarray sum = " << kadansAlgo(n, arr) << "\n";
    };

    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {-1, -2, -3, -4};
    int a3[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // classic example
    int a4[] = {-3, -1, -2, -4, -5};
    int a5[] = {5};

    runTest(a1, sizeof(a1) / sizeof(a1[0]), "All positive");
    runTest(a2, sizeof(a2) / sizeof(a2[0]), "All negative");
    runTest(a3, sizeof(a3) / sizeof(a3[0]), "Mixed classic");
    runTest(a4, sizeof(a4) / sizeof(a4[0]), "All negative 2");
    runTest(a5, sizeof(a5) / sizeof(a5[0]), "Single element");

    return 0;
}