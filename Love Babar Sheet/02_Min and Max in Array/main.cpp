#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> &arr) {
        int mini = arr[0];
        int maxi= arr[0];
        
        for(int i =0; i< arr.size(); i++){
            if(arr[i]< mini) mini = arr[i];
            if(arr[i] > maxi) maxi = arr[i];
        }
        return {mini, maxi};
        
    }
};