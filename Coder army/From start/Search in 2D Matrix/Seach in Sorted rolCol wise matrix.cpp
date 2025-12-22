#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findx(vector<vector<int>> matrix, int n, int m, int x)
{

    int row = 0, col = m - 1;

    while (row < n && col >= 0)
    {
        if (matrix[row][col] == x)
        {
            return 1;
        }
        else if (matrix[row][col] < x)
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    return 0;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};
    int n = matrix.size();
    int m = matrix[0].size();
    int x = 8; // value to search
    if (findx(matrix, n, m, x))
    {
        cout << x << " found in matrix." << endl;
    }
    else
    {
        cout << x << " not found in matrix." << endl;
    }
    return 0;
}