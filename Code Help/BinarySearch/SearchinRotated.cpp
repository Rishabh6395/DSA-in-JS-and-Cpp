// Search in Rotated sorted array:

#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int>&arr, int n){

    int s =0;
    int e = n -1;
    int mid = s + (e-s) /2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s) /2;
    }
    return s;
}

int binarySearch(vector<int>&arr, int s, int e, int key){

    int start = 0;
    int end = e;

    int mid = start + (end-start) /2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right part
        else if(key>arr[mid]){
            start = mid + 1;
        }
        // key is smaller to mid
        else{
            end = mid -1;
        }
        mid = start + (end-start) /2;
    }
    return -1;
}

int findPosition(vector<int>&arr, int n, int k){

    int pivot = getPivot(arr,n);
    if(k>= arr[pivot] && k <=arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }

    else{
        return binarySearch(arr,0,pivot-1, k);
    }

}


int main(){

    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int key = 3;

    int position = findPosition(arr, n, key);
    if (position != -1) {
        cout << "Element " << key << " is found at index: " << position << endl;
    } else {
        cout << "Element " << key << " is not found in the array." << endl;
    }

    return 0;
    
    return 0;
}