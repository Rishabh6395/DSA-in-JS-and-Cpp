#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int> &arr){
    int maxi = INT_MIN, prefix = 0, totalSum = 0, n=arr.size();

    for(int i =0; i<n; i++){
        totalSum += arr[i];
    }

    for(int i =0; i<n; i++){
        prefix+=arr[i];
        int ans = totalSum-prefix;
        if(ans == prefix){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of an array";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elemeent of an array";
    for(int i =0; i<n; i++){
        cin>>v[i];
    };

    cout<<divide(v);

    return 0;
}