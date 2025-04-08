// Find Unique element

#include<iostream>
using namespace std;

int findUnique(int *arr, int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int arr[7] ={2,3,1,6,3,6,2};
    int a = findUnique(arr, 7);
    cout<<a<<endl;
    

    return 0;
}