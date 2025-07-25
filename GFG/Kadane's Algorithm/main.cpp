// Given an integer array arr[]. You need to find the maximum sum of a subarray.

// Examples:

// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
// Input: arr[] = [-2, -4]
// Output: -2
// Explanation: The subarray {-2} has the largest sum -2.
// Input: arr[] = [5, 4, 1, 7, 8]
// Output: 25
// Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        long long sum =0, maxi = LONG_MIN;
        int n = arr.size();
        
        for(int i =0; i<n; i++){
            sum += arr[i];
            
            if(sum> maxi){
                maxi = sum;
            }
            if(sum<0){
                sum =0;
            }
        }
        return maxi;
    }
};