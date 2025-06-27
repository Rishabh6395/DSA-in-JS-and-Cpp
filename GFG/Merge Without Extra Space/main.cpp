// Given two sorted arrays a[] and b[] of size n and m respectively, the task is to merge them in sorted order without using any extra space. Modify a[] so that it contains the first n elements and modify b[] so that it contains the last m elements.

// Examples:

// Input: a[] = [2, 4, 7, 10], b[] = [2, 3]
// Output:
// 2 2 3 4
// 7 10
// Explanation: After merging the two non-decreasing arrays, we get, 2 2 3 4 7 10
// Input: a[] = [1, 5, 9, 10, 15, 20], b[] = [2, 3, 8, 13]
// Output:
// 1 2 3 5 8 9
// 10 13 15 20
// Explanation: After merging two sorted arrays we get 1 2 3 5 8 9 10 13 15 20.
// Input: a[] = [0, 1], b[] = [2, 3]
// Output:
// 0 1
// 2 3
// Explanation: After merging two sorted arrays we get 0 1 2 3.

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int ind1, int ind2) {
        if (arr1[ind1] > arr2[ind2]) {
            swap(arr1[ind1], arr2[ind2]);
        }
    }

public:
    void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        int len = n + m;

        int gap = (len / 2) + (len % 2); // initial gap

        while (gap > 0) {
            int left = 0, right = left + gap;

            while (right < len) {
                // Case 1: both pointers in arr1
                if (left < n && right < n) {
                    if (arr1[left] > arr1[right]) {
                        swap(arr1[left], arr1[right]);
                    }
                }
                // Case 2: left in arr1, right in arr2
                else if (left < n && right >= n) {
                    if (arr1[left] > arr2[right - n]) {
                        swap(arr1[left], arr2[right - n]);
                    }
                }
                // Case 3: both pointers in arr2
                else {
                    if (arr2[left - n] > arr2[right - n]) {
                        swap(arr2[left - n], arr2[right - n]);
                    }
                }

                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2); // reduce gap
        }
    }
};
