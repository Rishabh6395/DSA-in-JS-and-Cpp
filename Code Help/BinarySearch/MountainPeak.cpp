// Find Peak in Mountain Array

#include <iostream>
#include <vector>
using namespace std;

int peakElem(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s < e)
    { // Use s < e instead of s <= e
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            // Move to the right part of the array
            s = mid + 1;
        }
        else
        {
            // Move to the left part of the array
            e = mid;
        }
    }
    // At the end of the loop, s == e, which is the peak element index
    return s;
}

int main()
{
    vector<int> arr = {0, 2, 1, 0};
    cout << "Peak element is at index: " << peakElem(arr) << endl;

    return 0;
}