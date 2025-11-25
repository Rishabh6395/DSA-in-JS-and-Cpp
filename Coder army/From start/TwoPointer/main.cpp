#include<iostream>
#include<vector>
using namespace std;

// [1,2,5,45,80,90] target = 85

vector<int> twoSum(vector<int>& arr, int target) {
    int start = arr[0];
    int end = arr.size()-1;
    while (start<end){
        if(arr[start] + arr[end] == target){
            return {arr[start], arr[end]};
        }
        else if(arr[start] + arr[end] < target){
            start ++;
        }
        else {
            end --;
        }
    }
    return {};
}

int main(){

    vector<int> arr = {1, 2, 5, 45, 80, 90};
    int target = 85;

    vector<int> result = twoSum(arr, target);

    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}