#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> & nums, int k){
    vector<int> temp(nums.size());

    for(int i =0; i< nums.size(); i++){
        temp[(i+k)% nums.size()] = nums[i];
    }
    nums = temp;
}

int main(){

    vector <int> nums = {1,7,9,11}; 
    int k =2;
    rotate(nums, k);
    cout<<"Ans: ";

    for(int num: nums){
        cout<< num << " ";
    }
    cout<<endl;

    return 0;
}