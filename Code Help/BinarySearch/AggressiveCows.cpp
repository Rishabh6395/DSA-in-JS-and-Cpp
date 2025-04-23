// Aggressive Cows Problem

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it is possible to place 'k' cows with at least 'mid' distance apart
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;        // Place the first cow in the first stall
    int lastPos = stalls[0]; // Track the position of the last placed cow

    for (int i = 1; i < stalls.size(); i++) // Start from the second stall
    {
        // Check if the current stall is at least 'mid' distance from the last placed cow
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;        // Place another cow
            if (cowCount == k) // If all cows are placed successfully
                return true;
            lastPos = stalls[i]; // Update the position of the last placed cow
        }
    }
    return false; // Not possible to place all cows with the given 'mid' distance
}

// Function to find the largest minimum distance between cows
int aggresiveCows(vector<int> &stalls, int k)
{
    // Sort the stalls to ensure they are in increasing order
    sort(stalls.begin(), stalls.end());

    int s = 0;                            // Start of the search space (minimum distance)
    int maxi = stalls[stalls.size() - 1]; // Maximum distance between the first and last stall
    int e = maxi;                         // End of the search space (maximum distance)
    int ans = -1;                         // Variable to store the result
    int mid = s + (e - s) / 2;            // Calculate the middle of the search space

    // Binary search to find the largest minimum distance
    while (s <= e)
    {
        // Check if it is possible to place cows with at least 'mid' distance
        if (isPossible(stalls, k, mid))
        {
            ans = mid;   // Update the answer
            s = mid + 1; // Try for a larger minimum distance
        }
        else
        {
            e = mid - 1; // Reduce the search space
        }
        mid = s + (e - s) / 2; // Recalculate the middle
    }
    return ans; // Return the largest minimum distance
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9}; // Positions of stalls
    int k = 3;                            // Number of cows

    // Call the function to find the largest minimum distance
    int result = aggresiveCows(stalls, k);

    // Print the result
    cout << "The largest minimum distance between the cows is: " << result << endl;

    return 0;
}