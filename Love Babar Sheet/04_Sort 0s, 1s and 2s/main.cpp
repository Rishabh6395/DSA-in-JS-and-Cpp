#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

void sort012(vector<int>& arr) {
        bubbleSort(arr);      
    }
int main(){

    vector<int> arr = {7, 10, 4, 3, 20, 15};
    sort012(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}