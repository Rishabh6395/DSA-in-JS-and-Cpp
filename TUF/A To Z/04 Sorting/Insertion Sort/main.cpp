#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int j =i;
        while(j>0 && arr[j-1] > arr[j]){
            // swap:
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) arr[i];
    InsertionSort(arr,n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}