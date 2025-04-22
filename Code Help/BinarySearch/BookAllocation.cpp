#include <iostream>
#include <vector>
using namespace std;

// Function to check if it is possible to allocate books such that no student gets more than 'mid' pages

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1; // Start with the first student
    int pageSum = 0;      // Sum of pages allocated to the current student

    for (int i = 0; i < n; i++)
    {
        // If adding the current book's pages doesn't exceed 'mid', allocate it to the current student
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            // Allocate the book to the next student
            studentCount++;
            // If the number of students exceeds 'm' or a single book has more pages than 'mid', return false
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            // Start a new allocation for the next student
            pageSum = arr[i];
        }
    }
    return true; // Allocation is possible
}

// Function to find the minimum number of pages that can be allocated
int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0; // Start of the search space
    int sum = 0;

    // Calculate the total sum of pages
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;               // End of the search space
    int ans = -1;              // Variable to store the result
    int mid = s + (e - s) / 2; // Calculate the middle of the search space

    // Binary search to find the minimum number of pages
    while (s <= e)
    {
        // Check if it is possible to allocate books with 'mid' as the maximum pages
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;   // Update the answer
            e = mid - 1; // Try to find a smaller maximum
        }
        else
        {
            s = mid + 1; // Increase the search space
        }
        mid = s + (e - s) / 2; // Recalculate the middle
    }
    return ans; // Return the minimum number of pages
}

int main()
{
    vector<int> arr = {10, 20, 30, 40}; // Array representing the number of pages in each book
    int n = arr.size();                 // Number of books
    int m = 2;                          // Number of students

    // Call the function to allocate books
    int result = allocateBooks(arr, n, m);

    // Print the result
    if (result != -1)
    {
        cout << "The minimum number of pages that can be allocated is: " << result << endl;
    }
    else
    {
        cout << "It is not possible to allocate books to all students." << endl;
    }

    return 0;
}