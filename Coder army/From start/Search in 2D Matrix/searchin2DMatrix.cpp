#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int SearchInMatix(vector<vector<int>> matrix, int x)
{
    // Binary Search
    int N = matrix.size(), M = matrix[0].size();
    int row_index, col_index, start = 0, end = N * M - 1, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        row_index = mid / M;
        col_index = mid % M;

        if (matrix[row_index][col_index] == x)
        {
            return 1;
        }
        else if (matrix[row_index][col_index] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    // Test matrix (sorted row-wise and column-wise)
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}};

    vector<int> test_values = {3, 13, 30, 50, 1, 100};
    for (int x : test_values)
    {
        cout << "Searching for " << x << ": ";
        if (SearchInMatix(matrix, x))
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }
    return 0;
}