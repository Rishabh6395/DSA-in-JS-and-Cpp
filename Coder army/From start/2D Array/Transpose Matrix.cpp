#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void TransposeMatix(int matrix[][3], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main()
{

    int arr[3][3] = {2, 3, 4, 1, 5, 7, 4, 7, 1};
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    TransposeMatix(arr, 3);

    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Test case 2: Identity matrix
    int identity[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    TransposeMatix(identity, 3);
    cout << "\nTransposed Identity Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << identity[i][j] << " ";
        }
        cout << endl;
    }

    // Test case 3: All same elements
    int same[3][3] = {5, 5, 5, 5, 5, 5, 5, 5, 5};
    TransposeMatix(same, 3);
    cout << "\nTransposed All-Same Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << same[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}