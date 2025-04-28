#include <iostream>
#include <vector>
using namespace std;

// Function to perform Selection Sort
void selectSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // Assume the current index is the minimum

        // Find the index of the smallest element in the remaining array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the smallest element with the current element
        swap(arr[minIndex], arr[i]);
    }
}

// Function to print the array
void printArray(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11}; // Input array
    int n = arr.size();

    cout << "Original array: ";
    printArray(arr);

    // Perform Selection Sort
    selectSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}