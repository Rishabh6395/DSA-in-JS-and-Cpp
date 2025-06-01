#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // initialize the two pointers left and right
        int left =0, right = arr.size() -1;
        
        // interate the array 
        while(left< right){
            // swap the left and right
            swap(arr[left], arr[right]);
            
            // increment left arr and decrement right array
            left ++;
            right --;
        }
        
    }
};