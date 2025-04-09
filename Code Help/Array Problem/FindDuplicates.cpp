// Find Duplicates in an array

#include<iostream>
#include<vector>
using namespace std;

int findDup(vector<int> &arr){
    int ans = 0;

    for(int i =0; i<arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    for(int i =0 ;i<arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}

int main(){

    vector<int> arr = {4,2,1,3,1};
    int duplicate = findDup(arr);
    cout<<"Duplicate is "<< duplicate<<endl;

    return 0;
}