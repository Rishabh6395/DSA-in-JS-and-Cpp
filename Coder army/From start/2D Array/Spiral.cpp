#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Spiralorder(int arr[][3], int row, int col)
{
    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    while (top <= bottom && left <= right)
    {
        // Print top row
        for (int j = left; j <= right; j++)
        {
            cout << arr[top][j] << " ";
        }
        top++;
        // Print right column
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        // Print bottom row (if any)
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }
        // Print left column (if any)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
}

int main()
{
    // Test case 1: 3x3 matrix
    int arr1[3][3] = {
        {2, 3, 4},
        {1, 5, 7},
        {4, 7, 1}};
    cout << "Spiral order of 3x3 matrix:\n";
    Spiralorder(arr1, 3, 3);

    // Test case 2: 4x3 matrix
    int arr2[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    cout << "Spiral order of 4x3 matrix:\n";
    Spiralorder(arr2, 4, 3);

    return 0;
}