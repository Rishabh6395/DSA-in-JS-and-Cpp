// Given an array arr, count the number of distinct triplets (a, b, c) such that:

// a + b = c

// Each triplet is counted only once, regardless of the order of a and b.

// Even if the same number appears multiple times in the array, a valid triplet should be counted only once per unique combination.

// Examples:

// Input: arr[] = [1, 5, 3, 2]
// Output: 2 
// Explanation: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5
// Input: arr[] = [2, 3, 4]
// Output: 0
// Explanation: No such triplet exits


#include <bits/stdc++.h>
using namespace std;

//Back-end complete function template for C++

class Solution {
  public:
    // Function to count the number of triplets with the given condition.
    int countTriplet(vector<int>& arr) {
        int n = arr.size();
        // Sorting the array in ascending order.
        sort(arr.begin(), arr.end());

        // Initializing the count of triplets as 0.
        int ans = 0;

        // Iterating over the array in reverse order.
        for (int i = n - 1; i >= 0; i--) {
            // Initializing two pointers, one at the beginning and one at i-1.
            int j = 0;
            int k = i - 1;

            // Using two-pointer approach to find the triplets.
            while (j < k) {
                // If the given condition is satisfied, increment the count and move the
                // pointers.
                if (arr[i] == arr[j] + arr[k]) {
                    ans++;
                    j++;
                    k--;
                }
                // If the sum is less than the target, move the left pointer.
                else if (arr[i] > arr[j] + arr[k])
                    j++;
                // If the sum is greater than the target, move the right pointer.
                else
                    k--;
            }
        }
        // Returning the count of triplets.
        return ans;
    }
};