#include <iostream>
#include <vector>
#include <algorithm> // For min and max
using namespace std;

vector<vector<int>> pairSum(int arr[], int res, int n)
{
    vector<vector<int>> ans;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        { // Fixed loop condition
            if (arr[i] + arr[j] == res)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int res = 5;
    int size = 5;

    vector<vector<int>> result = pairSum(arr, res, size);

    // Print the result
    cout << "Pairs with sum " << res << " are:" << endl;
    for (auto pair : result)
    {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }

    return 0;
}