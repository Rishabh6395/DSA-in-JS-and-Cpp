#include <bits/stdc++.h>
#include <vector>
using namespace std;

int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecorder(int n, vector<int> a)
{
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return {slargest, ssmallest};
}

int main()
{

    // --- Example test cases ---
    // Test 1: mixed values with duplicates
    // Array: {2, 5, 3, 5, 1}
    // Largest = 5, second largest (distinct) = 3
    // Smallest = 1, second smallest (distinct) = 2
    vector<int> test1 = {2, 5, 3, 5, 1};
    auto out1 = getSecorder((int)test1.size(), test1);
    cout << "Test 1 -> Second Largest: " << out1[0]
         << ", Second Smallest: " << out1[1] << '\n';

    // Test 2: all equal elements
    // Array: {4,4,4,4}
    // There is no distinct second largest or second smallest,
    // functions return -1 for second largest and INT_MAX for
    // second smallest as implemented.
    vector<int> test2 = {4, 4, 4, 4};
    auto out2 = getSecorder((int)test2.size(), test2);
    cout << "Test 2 -> Second Largest: " << out2[0]
         << ", Second Smallest: " << out2[1] << '\n';

    // If you want to test with custom input, uncomment below.
    // Input format: first line `n`, next `n` integers.
    /*
    int n;
    if(cin >> n){
        vector<int> custom(n);
        for(int i=0;i<n;i++) cin >> custom[i];
        auto res = getSecorder(n, custom);
        cout << res[0] << ' ' << res[1] << '\n';
    }
    */

    return 0;
}
