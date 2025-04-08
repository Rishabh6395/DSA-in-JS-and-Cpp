// Swap Alternate

#include<iostream>
using namespace std;

void sweep(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void printArr(int arr[], int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlt(int arr[], int n){
    for(int i =0; i<n; i+=2){
        if(i+1 < n){
            // swap(arr[i], arr[i+1]);
            sweep(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {1,6,3,9,10,-12,25,8};
    int odd[5] = {2,8,10,-4,6};
    swapAlt(even, 8);
    printArr(even, 8);
    swapAlt(odd, 5);
    printArr(odd,5);



    return 0;
}